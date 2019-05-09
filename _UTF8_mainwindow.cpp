#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Значения переменных по умолчанию
    logsstrs=0;
    logtablerowcount = 0;
    clipboardspyactiv = false;
    defaultcreenname = tr("/screenshot");
    hidemainwindowforscreen = false;
    globalarea = false;
    localarea = false;
    logtype = ui->SB_logtype->value();

    qDebug() << "logtype=" << logtype;
    if (logtype!=1)
        ui->LogEdit->hide();
    if (logtype!=2)
        ui->LogTable->hide();

    // Настраиваем область экрана для скринов
    setcreenareadefault();

    // http://www.iconsearch.ru
    //Вводим массив изображений-иконок для лога
    iconname << "images/time.png";
    iconname << "images/filesave.png";
    iconname << "images/error.png";
    iconname << "images/information_frame.png";
    iconname << "images/application_windows.png";
    iconname << "images/application_windows_remove.png";
    iconname << "images/buff.png";
    //writelog("","",3,true);
    fileformatslist << "BMP" << "JPG" << "JPEG" << "PNG" << "PPM" << "XBM" << "XPM";


    //dialog = new QFileDialog(this);
        //connect(dialog, SIGNAL(currentChanged(QString)), this, SLOT(currentChangeddialog(QString)));

    Screenshotarea = new ScreenshotArea();
    myscreeneditor = new screeneditor(); //QPixmap originalPixmap

    screentimer = new QTimer(this);
    pixelspy = new QTimer(this);
    clipboardspyvar = QApplication::clipboard();
    progbeforescreen = new QProcess(this);
    progafterlefttimer = new QProcess(this);
    progafterleftscreen = new QProcess(this);

    connect(Screenshotarea, SIGNAL(screenshotareahidden(QRect)), this, SLOT(ScreenshotareahideEvent(QRect)));
    connect(screentimer, SIGNAL(timeout()), this, SLOT(screentimeraction()));
    connect(pixelspy, SIGNAL(timeout()), this, SLOT(pixelspyaction()));
    connect(clipboardspyvar, SIGNAL(dataChanged()), this, SLOT(clipboardspy()));
    connect(progbeforescreen, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(progbeforescreenonexit(int, QProcess::ExitStatus)));
    connect(progafterlefttimer, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(progafterlefttimeronexit(int, QProcess::ExitStatus)));
    connect(progafterleftscreen, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(progafterleftscreenonexit(int, QProcess::ExitStatus)));

    connect(ui->LogEdit, SIGNAL(anchorClicked(QUrl)), this, SLOT(logeditanchorcliked(QUrl)));
    //connect(ui->LogTable, SIGNAL(cellClicked(int,int)), this, SLOT(logtablecellclicked(int,int)));
    connect(ui->LogTable, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(logtabledoublecellclicked(QModelIndex)));


    // Создаём таймер, коннектим сигнал окончания времени на слот функцию-действия и выводим сообщение что пока таймер не активен
    ui->TimerStatusLebel->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активен") + "</b></span>");
    ui->label_10->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активен") + "</b></span>");
    ui->label_12->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активно") + "</b></span>");
    ui->LEFilename->setText("Screen_yyyy_MM_dd_hh_mm_ss_zzz");
    ui->LELogfilename->setText("logs/savescr.log");
    ui->LogEdit->setOpenLinks(false);
    ui->area_save_button->hide();
    ui->area_x->hide();
    ui->area_y->hide();
    ui->area_w->hide();
    ui->area_h->hide();
    ui->t_area_x->hide();
    ui->t_area_y->hide();
    ui->t_area_w->hide();
    ui->t_area_h->hide();

    // Выводим количество мониторов (а точнее рабочих столов)
    curscreenCount = QApplication::desktop()->screenCount();
    tempstr.sprintf(tr("Количество мониторов").toAscii() + ": %d", curscreenCount);
    ui->statusBar->showMessage(tempstr);
    setstyles(); // Устанавливаем стили по умолчанию
    QFile inifile("savescr-settings.conf");
    if (inifile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        loadset(); //
        writelog(tr("Запуск программы [настройки загружены из файла]"),"<span style=\" font-size:8pt; color:#64D8D8;\"><b> %1 </b></span>",3,true);
    }
    else
        writelog(tr("Запуск программы [настройки по умолчанию]"),"<span style=\" font-size:8pt; color:#64D8D8;\"><b> %1 </b></span>",3,true);

}

void MainWindow::loadset()
{
    QSettings settings(QCoreApplication::applicationDirPath() + QDir::separator() + "savescr-settings.conf", QSettings::IniFormat);

    QList<QObject*> widgets = getchildrenlist((ui->centralWidget),3,false,0);
    for (int i=0;i<widgets.count();i++)
    {
        if (QLineEdit *curwidget = qobject_cast<QLineEdit*>(widgets[i])) //dynamic_cast
        {
            curwidget->setText(settings.value("QLineEdit/" + curwidget->objectName()).toString());
        }
        if (QCheckBox *curwidget = qobject_cast<QCheckBox*>(widgets[i])) //dynamic_cast
        {
            curwidget->setChecked(settings.value("QCheckBox/" + curwidget->objectName()).toBool());
        }
        if (QDateTimeEdit *curwidget = qobject_cast<QDateTimeEdit*>(widgets[i])) //dynamic_cast
        {
            curwidget->setDateTime(settings.value("QDateTimeEdit/" + curwidget->objectName()).toDateTime()); //setDateTime(QDateTimeEdit)
        }
        if (QComboBox *curwidget = qobject_cast<QComboBox*>(widgets[i])) //dynamic_cast
        {
            curwidget->setCurrentIndex(settings.value("QComboBox/" + curwidget->objectName()).toInt()); //setCurrentIndex(int)
        }
        if (QSpinBox *curwidget = qobject_cast<QSpinBox*>(widgets[i])) //dynamic_cast
        {
            curwidget->setValue(settings.value("QSpinBox/" + curwidget->objectName()).toInt());        // setValue(int)
        }
        if (QRadioButton *curwidget = qobject_cast<QRadioButton*>(widgets[i])) //dynamic_cast
        {
            curwidget->setChecked(settings.value("QRadioButton/" + curwidget->objectName()).toBool());    // setChecked(bool)
        }
    }
}

void MainWindow::saveset()
{
    QSettings settings(QCoreApplication::applicationDirPath() + QDir::separator() + "savescr-settings.conf", QSettings::IniFormat);

    QList<QObject*> widgets = getchildrenlist((ui->centralWidget),3,false,0);
    for (int i=0;i<widgets.count();i++)
    {
        if (QLineEdit *curwidget = qobject_cast<QLineEdit*>(widgets[i])) //dynamic_cast
        {
            settings.setValue("QLineEdit/" + curwidget->objectName(), curwidget->text());         // setText(QString)
        }
        if (QCheckBox *curwidget = qobject_cast<QCheckBox*>(widgets[i])) //dynamic_cast
        {
            settings.setValue("QCheckBox/" + curwidget->objectName(), curwidget->isChecked());    // setChecked(bool)
        }
        if (QDateTimeEdit *curwidget = qobject_cast<QDateTimeEdit*>(widgets[i])) //dynamic_cast
        {
            settings.setValue("QDateTimeEdit/" + curwidget->objectName(), curwidget->dateTime()); //setDateTime(QDateTimeEdit)
        }
        if (QComboBox *curwidget = qobject_cast<QComboBox*>(widgets[i])) //dynamic_cast
        {
            settings.setValue("QComboBox/" + curwidget->objectName(), curwidget->currentIndex()); //setCurrentIndex(int)
        }
        if (QSpinBox *curwidget = qobject_cast<QSpinBox*>(widgets[i])) //dynamic_cast
        {
            settings.setValue("QSpinBox/" + curwidget->objectName(), curwidget->value());         // setvalue(int)
        }
        if (QRadioButton *curwidget = qobject_cast<QRadioButton*>(widgets[i])) //dynamic_cast
        {
            settings.setValue("QRadioButton/" + curwidget->objectName(), curwidget->isChecked());    // setChecked(bool)
        }
    }
}

QList<QObject*> MainWindow::getchildrenlist(QObject *widget, int maxrecursion, bool allwidgetslist, int currecursion=0)
{
    int rval = currecursion + 1; //   
    QList<QObject*> childrens = widget->children(), allchildrens; allchildrens += childrens;
    for (int i=0;i<childrens.count();i++)
    {
        QTabWidget *tabwidget;
        if (((tabwidget = qobject_cast<QTabWidget*>(childrens[i])) && (!allwidgetslist))  ||  (allwidgetslist))
            if (rval<=maxrecursion)
                allchildrens+=getchildrenlist(childrens[i],maxrecursion,true,rval);
    }
    return allchildrens;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (userReallyWantsToQuit()) {
        saveset();
        event->accept();
    } else {
        event->ignore();
    }
}

bool MainWindow::userReallyWantsToQuit()
 {
        return true;
         QMessageBox::StandardButton ret;
         ret = QMessageBox::warning(this, tr("SaveSCR"),
                      tr("Вы действительно хотите выйти?.\n"
                         "Все не сохранённые данные будут удалены!"),
                      QMessageBox::Save | QMessageBox::Cancel);
         if (ret == QMessageBox::Save)
             return true;
         else if (ret == QMessageBox::Cancel)
             return false;
     return true;
 }

void MainWindow::logeditanchorcliked(QUrl logediturl)
{
    qDebug() << "URL= " << logediturl.toString(QUrl::None);
    QFileInfo imagefile(logediturl.toString(QUrl::None));
    if (imagefile.exists())
        QDesktopServices::openUrl(logediturl);
    else
        QMessageBox::critical(this, "Ошибка", "Файл " + logediturl.toString(QUrl::None) + " не найден!");
}

void MainWindow::logtablecellclicked(int row, int column )
{
    qDebug() << "c row= " << row  << "column= " << column ;
}

void MainWindow::logtabledoublecellclicked(QModelIndex myModelIndex)
{
    //qDebug() << "dc row= " << myModelIndex.row()  << "column= " << myModelIndex.column() << "__" <<  ;
    if (screenfiles[myModelIndex.row()]=="")
        return;
    QFile inifile(screenfiles[myModelIndex.row()]);
    if (inifile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        myscreeneditor->setscreen(QPixmap(screenfiles[myModelIndex.row()]));
        myscreeneditor->show();
    }
    else
        QMessageBox::critical(this, "Ошибка", "Файл " + screenfiles[myModelIndex.row()] + " не найден!");
    //myscreeneditor->setGeometry(QRect (50,50, 300, 300));
    //myscreeneditor->setStyleSheet("background-color: #F5EEA7;");
    //myscreeneditor->setWindowOpacity(0.5);
    //Screenshotarea->setWindowFlags(Qt::CustomizeWindowHint);
    //QPixmap("filename")
}


void MainWindow::hideEvent(QHideEvent *event )
{
    if ((!this->isVisible())&&(hidemainwindowforscreen))
    {
        if (!ui->areas_only->isChecked())
        {
            qDebug() << "hide win! no minimize" << hidemainwindowforscreen;
            originalPixmap = QPixmap(); // clear image for low memory situations on embedded devices.
            originalPixmap = QPixmap::grabWindow(QApplication::desktop()->screen(2)->winId(),ui->CB_coorx_x1->value(),ui->CB_coorx_y1->value(),ui->CB_coorx_x2->value(),ui->CB_coorx_y2->value()); //
            saveScreenshot();
        }
        if (ui->multiareas->isChecked())
        {
            for (int i=0;i<ui->arealist->count();i++)
            {
                QRegExp rx("\\(([-]?\\d+)\\,([-]?\\d+)\\s(\\d+)x(\\d+)\\)");
                int pos = rx.indexIn(ui->arealist->item(i)->text());
                if (pos > -1)
                {
                    bool ok;
                    originalPixmap = QPixmap::grabWindow(QApplication::desktop()->screen(2)->winId(),rx.cap(1).toInt(&ok,10),rx.cap(2).toInt(&ok,10),rx.cap(3).toInt(&ok,10),rx.cap(4).toInt(&ok,10)); //
                    saveScreenshot();
                }
            }
        }
    }
}

/*
        void MainWindow::changeEvent(QEvent *e)
        {
            QMainWindow::changeEvent(e);
            switch (e->type()) {
            case QEvent::LanguageChange:
                ui->retranslateUi(this);
                break;
            default:
                break;
            }
        }
*/

void MainWindow::setcreenareadefault()
{

    QRect qrectvar;
    int currentscreenCount = QApplication::desktop()->screenCount();
    if (currentscreenCount==1)
    {
        qrectvar = QApplication::desktop()->screenGeometry(-1);
        ui->CB_coorx_x1->setValue(qrectvar.x());
        ui->CB_coorx_y1->setValue(qrectvar.y());
        ui->CB_coorx_x2->setValue(qrectvar.width());
        ui->CB_coorx_y2->setValue(qrectvar.height());
    }
    else
    {
        //QStringList coords_x;
        QList<int> coords_x, coords_y, coords_width,coords_height;
        int minx=0,miny=0,maxx=0,maxy=0;

        for (int i=1;i<=currentscreenCount;i++)
        {
            qrectvar = QApplication::desktop()->screenGeometry(i);
            coords_x << qrectvar.x();
            coords_y << qrectvar.y();
            coords_width << qrectvar.width();
            coords_height << qrectvar.height();
        }

        for (int i=0;i<currentscreenCount-1;i++)
        {
            //qrectvar = QApplication::desktop()->screenGeometry(i);
            if (coords_x[i]<coords_x[i+1])
                minx = coords_x[i];
            else
                minx = coords_x[i+1];
            if (coords_y[i]<coords_y[i+1])
                miny = coords_y[i];
            else
                miny = coords_y[i+1];
        }
        ui->CB_coorx_x1->setValue(minx);
        ui->CB_coorx_y1->setValue(miny);

        qrectvar = QApplication::desktop()->screenGeometry(-1);

        if (minx<0)
            for (int i=0;i<currentscreenCount;i++)
                maxy += coords_width[i];
        else
            maxy=qrectvar.width();
        if (miny<0)
            for (int i=0;i<currentscreenCount;i++)
                maxx += coords_height[i];
        else
            maxx=qrectvar.height();
        ui->CB_coorx_x2->setValue(maxy);
        ui->CB_coorx_y2->setValue(maxx);
    }
}



void MainWindow::ScreenshotareahideEvent(QRect areageometry)
{
    if (globalarea)
    {
        ui->CB_coorx_x1->setValue(areageometry.x());
        ui->CB_coorx_y1->setValue(areageometry.y());
        ui->CB_coorx_x2->setValue(areageometry.width());
        ui->CB_coorx_y2->setValue(areageometry.height());
        globalarea = false; localarea = false;
    }
    if (localarea)
    {
        ui->arealist->addItem(tr("Область ") + QString("(%1,%2 %3x%4)").arg(areageometry.x()).arg(areageometry.y()).arg(areageometry.width()).arg(areageometry.height()));
        localarea = false;
    }
}

void MainWindow::progbeforescreenonexit(int progexitcode, QProcess::ExitStatus progexitstatus)
{
    writelog(tr("Программа \"") + ui->LEProgpath->text() + "\" завершена с кодом: " + QString("%1").arg(progexitcode),"<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 </b></span>",5,true);
}

void MainWindow::progafterlefttimeronexit(int progexitcode, QProcess::ExitStatus progexitstatus)
{
    writelog(tr("Программа \"") + ui->lineEdit_3->text() + "\" завершена с кодом: " + QString("%1").arg(progexitcode),"<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 </b></span>",5,true);
}

void MainWindow::progafterleftscreenonexit(int progexitcode, QProcess::ExitStatus progexitstatus)
{
    writelog(tr("Программа \"") + ui->lineEdit_2->text() + "\" завершена с кодом: " + QString("%1").arg(progexitcode),"<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 </b></span>",5,true);
}

void MainWindow::setstyles()
{
    //LogEdit C6E9FF
    ui->LogEdit->setReadOnly(1);
    ui->LogEdit->setStyleSheet("background-color: #EDEAE4; border: 1px solid white; border-radius: 8px; margin: 2px; padding: 0px; font-style: bold;");
    ui->LogEdit->verticalScrollBar()->setStyleSheet("background-color: #EDEAE4; border: 1px solid white; border-radius: 8px; margin: 2px; padding: 0px; font-style: bold;");
    //ui->LogEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //this->setStyleSheet("background-color: #F5EEA7;");
    //ui->tabWidget->setStyleSheet("background-color: #F5EEA7;");
    //ui->tab->setStyleSheet("background-color: #F5EEA7;");
    QStringList list;
    list << "cl"  << "Время" << "Действие/Скриншот" << "R" << "№";
    ui->LogTable->setColumnCount(5);
    ui->LogTable->setHorizontalHeaderLabels(list);
    ui->LogTable->setColumnWidth(0,20);
    ui->LogTable->setColumnWidth(1,110);
    ui->LogTable->setColumnWidth(2,280);
    ui->LogTable->setColumnWidth(3,20);
    ui->LogTable->setColumnWidth(4,20);
    //ui->LogTable->setRowCount(1);
    ui->LogTable->horizontalHeader()->setStretchLastSection(1);
    //ui->LogTable->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->LogTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->LogTable->setSelectionMode(QAbstractItemView::SingleSelection);

}// Функция установки стилей элементов окна

void MainWindow::screentimeraction()
{
    QDate timerleftdate = ui->dateTimeEdit->date();
    QDate curdatefortimer = QDate::currentDate();
    QTime timerlefttime = ui->dateTimeEdit->time();
    QTime curtimefortimer = QTime::currentTime();

    if (ui->checkBox_5->isChecked())
    {
        if ((timerleftdate<=curdatefortimer)&&(timerlefttime<=curtimefortimer))
        {
            if (ui->checkBox_6->isChecked())
            {
                writelog(tr("Запуск внешней программы (по завершению таймера): \"") + ui->LEProgpath->text(),"<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 \" </b></span>",4,true);
                progafterlefttimer->start(ui->lineEdit_3->text());
            }
            if (screentimer->isActive())
            {
                screentimer->stop();
                ui->TimerStatusLebel->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активен") + "</b></span>");
                ui->label_10->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активен") + "</b></span>");
                writelog(tr("Таймер остановлен по заданию"),"<span style=\" font-size:8pt; color:#33AA33;\"><b> %1 </b></span>",0,true);
            }
            return;
        }
    }


    writelog(tr("Сработал таймер"),"<span style=\" font-size:8pt; color:#33AA33;\"><b> %1 </b></span>",0,true);
    if(ui->radioButton->isChecked())
    {
        on_pushButton_clicked();
    }
    if(ui->radioButton_2->isChecked())
    {
        on_pushButton_4_clicked();
    }
}// функция выполняющаяся по таймеру

int MainWindow::writelog(QString logstr,QString format,int iconnum,bool NoWritetofile, QString filepath)
{
    QString oldlog, DatePlusTime = "[yy.MM.dd hh:mm:ss] ";
    if(iconnum<0||iconnum>=iconname.count()) return 0;
    curtime = QTime::currentTime();
    curdate = QDate::currentDate();
    DatePlusTime = curdate.toString (DatePlusTime);
    DatePlusTime = curtime.toString (DatePlusTime);
    if (logtype==1)
    {
        logstr = QString(format).arg(logstr).arg(filepath);

        oldlog = ui->LogEdit->toHtml();
        curtime = QTime::currentTime();
        curdate = QDate::currentDate();
        DatePlusTime = curdate.toString (DatePlusTime);
        DatePlusTime = curtime.toString (DatePlusTime);
        ui->LogEdit->setHtml(oldlog + "<img src=\"" + iconname.at(iconnum) + "\" border=\"0\" alt=\"New Posts\"> " + DatePlusTime + logstr + "<br>");
        ui->LogEdit->verticalScrollBar()->setValue(ui->LogEdit->verticalScrollBar()->maximum());
        logsstrs++;
        ui->label_8->setText("<b>" + tr("Записей/позиция:  ") + QString::number(logsstrs) + "/" + QString::number(ui->LogEdit->verticalScrollBar()->value()) + "</b>");

        if ((ui->checkBox->isChecked())&&(NoWritetofile))
        {
            QString logpathplasfilename;
            QRegExp rx("(.+[\\\|\\/]+)([^\\\|\\/]+)$"); //original .+[\\|\/]+([^\\|\/]+)$
            int pos = rx.indexIn(ui->LELogfilename->text());
            if (pos > -1)
            {
                if (ui->checkBox_7->isChecked())
                    logpathplasfilename = getfolder(ui->LE_filepath->text() + "/" + rx.cap(1)) + rx.cap(2);
                else
                    logpathplasfilename = getfolder(rx.cap(1)) + rx.cap(2);
            }
            else
                if (ui->checkBox_7->isChecked())
                    logpathplasfilename = getfolder(ui->LE_filepath->text()) + rx.cap(2);
            else
                getfolder("") + rx.cap(2);
            qDebug() << "logfolder == "  << logpathplasfilename;
            if (ui->RBPlaintextlog->isChecked())
                Appendfile(logpathplasfilename,ui->LogEdit->toPlainText(),true);  // Appendfile(ui->LELogfilename->text(),DatePlusTime + logstr,false);
            if (ui->RBHTMLtextlog->isChecked())
                Appendfile(logpathplasfilename,ui->LogEdit->toHtml(),true);
            ui->LogTable->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
        }
    }
    if (logtype==2)
    {
        logtablerowcount++;
        if (iconnum==1)
            screenfiles[logtablerowcount-1] = filepath + logstr;
        //qDebug() << "table row" << logtablerowcount << " log str=" << logstr;
        //qDebug() << "iconnum " << iconnum << " sf=" << screenfiles[logtablerowcount];
        ui->LogTable->setRowCount(logtablerowcount);

        ui->LogTable->setRowHeight(logtablerowcount-1,20);
        //ui->LogTable->item(i-1,1)->setBackground(Qt::lightGray);
        tableItem = new QTableWidgetItem("");
        ui->LogTable->setItem(logtablerowcount-1, 0, tableItem);
        QIcon iconforstring(iconname.at(iconnum));
        tableItem->setIcon(iconforstring);
        itemList.append(tableItem);

        tableItem = new QTableWidgetItem(DatePlusTime);
        ui->LogTable->setItem(logtablerowcount-1, 1, tableItem);
        itemList.append(tableItem);

        tableItem = new QTableWidgetItem(logstr);
        ui->LogTable->setItem(logtablerowcount-1, 2, tableItem);
        itemList.append(tableItem);

        tableItem = new QTableWidgetItem("x");
        ui->LogTable->setItem(logtablerowcount-1, 3, tableItem);
        itemList.append(tableItem);

        tableItem = new QTableWidgetItem(QString::number(logtablerowcount));
        ui->LogTable->setItem(logtablerowcount-1, 4, tableItem);
        itemList.append(tableItem);
    }
    return 1;

}// функция ведения лога в TextEdit


MainWindow::~MainWindow()
{
    //Screenshotarea->hide();
    delete ui;
}

int MainWindow::Appendfile(QString newlogfilename, QString logstr, bool htmlstyle)
{
    QFile file(newlogfilename);
    if (!htmlstyle)
        if (!file.open(QIODevice::Append | QIODevice::Text))
        {
             writelog(tr("Файл лога недоступен для дозаписи!"),"<span style=\" font-size:8pt; color:#FF0000;\"><b> %1 </b></span>",2,false);
             return 0;
        }
        else;
    else
    {
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
             writelog(tr("Файл лога недоступен для дозаписи!"),"<span style=\" font-size:8pt; color:#FF0000;\"><b> %1 </b></span>",2,false);
             return 0;
        }
    }
    QTextStream out(&file);
    out << logstr << "\n";
    file.close();
    return 1;
}// Функция записи в файл

QString MainWindow::osname()
{
     #if defined(Q_OS_LINUX)
     return "Linux";
     #endif
     #if defined(Q_OS_WIN)
     return "Windows";
     #endif
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->checkBox_3->isChecked())
    {
        hidemainwindowforscreen = true;
        hide();

        qDebug() << "hidewin" << hidemainwindowforscreen ;
    }
    else
    {

        if (!ui->areas_only->isChecked())
        {
            originalPixmap = QPixmap(); // clear image for low memory situations on embedded devices.
            originalPixmap = QPixmap::grabWindow(QApplication::desktop()->screen(2)->winId(),ui->CB_coorx_x1->value(),ui->CB_coorx_y1->value(),ui->CB_coorx_x2->value(),ui->CB_coorx_y2->value()); //
            saveScreenshot();
        }

        if (ui->multiareas->isChecked())
        {
            for (int i=0;i<ui->arealist->count();i++)
            {
                QRegExp rx("\\(([-]?\\d+)\\,([-]?\\d+)\\s(\\d+)x(\\d+)\\)");
                int pos = rx.indexIn(ui->arealist->item(i)->text());
                if (pos > -1)
                {
                    bool ok;
                    originalPixmap = QPixmap::grabWindow(QApplication::desktop()->screen(2)->winId(),rx.cap(1).toInt(&ok,10),rx.cap(2).toInt(&ok,10),rx.cap(3).toInt(&ok,10),rx.cap(4).toInt(&ok,10)); //
                    saveScreenshot();
                }
            }
        }
    }
    if (ui->checkBox_3->isChecked())
    {
        globalarea = true;
        show();
        hidemainwindowforscreen = false;
        qDebug() << "showwin" << hidemainwindowforscreen ;
    }
    //QMessageBox::information(this, "После снятия", "Окно показано!");
}//кнопка сделать скриншот

void MainWindow::on_pushButton_2_clicked()
{
    QString oldlog = ui->LogEdit->toHtml();
    ui->LogEdit->setPlainText(oldlog);

}//  Справка

void MainWindow::on_pushButton_3_clicked()
{
    //4млрд миллисекунд..
    //4млн секунд..
    //66 666 минут
    // 1111 часов
    //49 дней
    if (screentimer->isActive())
    {
        screentimer->stop();
        ui->TimerStatusLebel->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активен") + "</b></span>");
        ui->label_10->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активен") + "</b></span>");
        writelog(tr("Таймер остановлен пользователем"),"<span style=\" font-size:8pt; color:#33AA33;\"><b> %1 </b></span>",0,true);
    }
    else
    {
        QString oldlog;
        int timeout = 0;
        timeout = ui->SBTimeout->value();
        if (ui->radioButton_3->isChecked())
            oldlog = tr("милисекунд ");
        if (ui->radioButton_4->isChecked())
        {
            timeout = timeout*1000;
            oldlog = tr("секунд ");
        }
        if (ui->radioButton_5->isChecked())
        {
            timeout = timeout*1000*60;
            oldlog = tr("минут ");
        }
        if (ui->radioButton_6->isChecked())
        {
            timeout = timeout*1000*60*60;
            oldlog = tr("часов ");
        }
        screentimer->start(timeout);
        ui->TimerStatusLebel->setText("<span style=\" font-size:8pt; color:#33DD33;\"><b>" + tr("Активен") + "</b></span>");
        ui->label_10->setText("<span style=\" font-size:8pt; color:#33DD33;\"><b>" + tr("Активен") + "</b></span>");
        //screentimer->setInterval(ui->spinBox->value());
        writelog(tr("Таймер запущен пользователем. Период ") + QString("%1").arg(ui->SBTimeout->value()) + oldlog,"<span style=\" font-size:8pt; color:#33AA33;\"><b> %1 </b></span>",0,true);
        if (ui->timeractionnow->isChecked())
            screentimeraction();
    }

}//кнопка запуска/остановки таймера

QString MainWindow::getfolder(QString path)
{
    QString userfileoath = path;
    QString initialPath, curruntdir = QDir::currentPath();
    QDir dir = QDir::currentPath();
    if (userfileoath.length()>1)
    {
        if (userfileoath.contains("\\",Qt::CaseInsensitive))
            userfileoath.replace("\\","/");
    }
    dir = QDir::current();
    if ((userfileoath.isNull())||(userfileoath=="/"))
        initialPath = dir.path();
    else
    {
        if(dir.exists(userfileoath))
        {
            dir.cd(userfileoath);
            initialPath = dir.path();
            //qDebug() << "EXIST" << initialPath;
        }
        else
        {
            qDebug() << "DONT EXIST" << userfileoath;
            if(dir.exists(curruntdir + "/" + userfileoath))
            {
                initialPath = curruntdir + "/" + userfileoath;
                //qDebug() << "EXIST2" << curruntdir + userfileoath;
            }
            else
            {
                if(dir.mkpath(curruntdir + "/" + userfileoath))
                {
                    dir.cd(curruntdir + "/" + userfileoath);
                    initialPath = dir.path();
                    //qDebug() << "New path" << dir;
                }
                else
                    if(dir.mkpath(userfileoath))
                    {
                        dir.cd(userfileoath);
                        initialPath = dir.path();
                        //qDebug() << "New path2" << dir;
                    }
                    else
                        QMessageBox::critical(this, "Ошибка", "Папка для сохранения файла не может быть создана!");
                //qDebug() << "Create path" << initialPath;
            }
        }
    }
    initialPath += "/";
    return initialPath;
    qDebug() << "last = " << initialPath;
} // Функция возвращаяет путь и если конечная папка не существует, создаёт её

void MainWindow::saveScreenshot()
{
    if (ui->CHBProgflag->isChecked())
    {
        writelog(tr("Запуск внешней программы (до снятия скриншота): \"") + ui->LEProgpath->text(),"<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 \" </b></span>",4,true);
        progbeforescreen->start(ui->LEProgpath->text());
    }
    QString format = fileformatslist[ui->CBFileformats->currentIndex()];
    QString formatstring = ui->CBFileformats->currentText();
    QString initialPath = getfolder(ui->LE_filepath->text());
    QString filename;
     //qDebug() << "Now dir is = " << initialPath;

    QFileDialog dialog(this);
    if (ui->CHBAskfnameflag->isChecked())
    {
        initialPath += defaultcreenname;
        filename = dialog.getSaveFileName(this, tr("Сохранить как"),
                                   initialPath,
                                   tr("BMP - Windows Bitmap (*.bmp);;JPG - Joint Photographic Experts Group (*.jpg);;JPEG - Joint Photographic Experts Group (*.jpeg);;PNG - Portable Network Graphics (*.png);;PPM - Portable Pixmap (*.ppm);;XBM - X11 Bitmap (*.x11);;XPM - X11 Pixmap (*.xpm);;All Files (*)"),&formatstring);

        if (!filename.isEmpty())
        {
            qDebug() <<  dialog.selectedNameFilter();
            originalPixmap.save(filename, format.toAscii());
            writelog(filename, "<span style=\" font-size:8pt; color:#444444;\"><b>" +  tr("Записан файл") + " </b></span><span style=\" font-size:8pt; color:#0000ff;\"><b><a href='%1'> %1 </a></b></span>",1,true);
        }
    }
    else
    {
        filename = ui->LEFilename->text();
        ui->pushButton->setDisabled(true);
        curtime = QTime::currentTime();
        curdate = QDate::currentDate();
        filename = curdate.toString (filename);
        filename = curtime.toString (filename);
        filename += "." + format;
        originalPixmap.save(initialPath + filename, format.toAscii());
        writelog(filename,"<span style=\" font-size:8pt; color:#444444;\"><b> " + tr("Записан файл") + " </b></span><span style=\" font-size:8pt; color:#0000ff;\"><b><a href='%1'>%1</a></b></span>",1,true,initialPath);
        ui->pushButton->setDisabled(false);
    }
    if (ui->checkBox_2->isChecked())
    {
       writelog(tr("Запуск внешней программы (после снятия скриншота): \"") + ui->lineEdit_2->text(), "<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 \" </b></span>",4,true);
       QString Proglinewithparams =  ui->lineEdit_2->text();
       Proglinewithparams.replace("$1",filename);
       progafterleftscreen->start(Proglinewithparams);
    }
}//функция сохранение скриншота

void MainWindow::on_pushButton_4_clicked()
{
    if (ui->CHBProgflag->isChecked())
    {
        writelog(tr("Запуск внешней программы (до снятия скриншота): \"") + ui->LEProgpath->text(), "<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 \" </b></span>",4,true);
        progbeforescreen->start(ui->LEProgpath->text());
    }
    QString filename;
    QString format = fileformatslist[ui->CBFileformats->currentIndex()];
    QString initialPath = getfolder(ui->LE_filepath->text());
    if (ui->CHBAskfnameflag->isChecked())
    {
        initialPath += tr("untitled.") + format;
        filename = QFileDialog::getSaveFileName(this, tr("Сохранить как"),
                                   initialPath,
                                   tr("BMP - Windows Bitmap (*.bmp);;JPG - Joint Photographic Experts Group (*.jpg);;JPEG - Joint Photographic Experts Group (*.jpeg);;PNG - Portable Network Graphics (*.png);;PPM - Portable Pixmap (*.ppm);;XBM - X11 Bitmap (*.x11);;XPM - X11 Pixmap (*.xpm);;All Files (*)"));

        if (filename.isEmpty())
            return;
    }
    else
    {
        filename = ui->LEFilename->text();
        curtime = QTime::currentTime();
        curdate = QDate::currentDate();
        filename = curdate.toString (filename);
        filename = curtime.toString (filename);
        filename = filename + "." + fileformatslist[ui->CBFileformats->currentIndex()];
    }
        QClipboard *clipboard = QApplication::clipboard();
        QImage Screenshot = clipboard->image(QClipboard::Clipboard);

        int currentchoiceformat = ui->CBFileformats->currentIndex();
        if (Screenshot.isNull())
        {
            writelog(tr("Данные буффера не являются изображением! Файл не записан!"),"<span style=\" font-size:8pt; color:#FF0000;\"><b> %1 </b></span>",2,true);
            if (ui->checkBox_3->isChecked())
            {
                show();
            }
            return;
        }

        ui->pushButton_4->setDisabled(true);

        qDebug() << "filename=" <<  filename << "initialPath=" << initialPath;
        Screenshot.save(filename,fileformatslist[currentchoiceformat].toAscii(),1 );
        writelog(filename,"<span style=\" font-size:8pt; color:#444444;\"><b>" + tr(" Записан файл") + " </b></span><span style=\" font-size:8pt; color:#0000ff;\"><b><a href='%1'>%1</a></b></span>",1,true);
        ui->pushButton_4->setDisabled(false);
        if (ui->checkBox_2->isChecked())
        {
           writelog(tr("Запуск внешней программы (после снятия скриншота): \"") + ui->lineEdit_2->text(),"<span style=\" font-size:8pt; color:#008B8B;\"><b> %1 \" </b></span>",4,true);
           QString Proglinewithparams =  ui->lineEdit_2->text();
           Proglinewithparams.replace("$1",filename);
           progafterleftscreen->start(Proglinewithparams);
        }

}//кнопка создания скриншота из буфера


void MainWindow::on_pushButton_5_clicked()
{
    if (logtype==1)
    {
        ui->LogEdit->clear();
        logsstrs=0;
        ui->label_8->setText("<b>" + tr("Записей/позиция:  ") + QString::number(logsstrs) + "/" + QString::number(ui->LogEdit->verticalScrollBar()->value()) + "</b>");
    }
    if (logtype==2)
    {
        logtablerowcount = 0;
        ui->LogTable->clearContents();
        ui->LogTable->setRowCount(0);
        ui->LogTable->setColumnCount(0);
    }

}// Кнопка очистки лога

 //QMessageBox::information(this, "Строка", "");

void MainWindow::on_pushButton_6_clicked()
{
    QString format = "exe";
    QString initialPath = QDir::currentPath() + tr("/untitled.") + format;
    QString exefilename = QFileDialog::getOpenFileName(this, tr("Укажите программу для запуска"),
                               initialPath,
                               tr("%1 Files (*.%2);;All Files (*)")
                               .arg(format.toUpper())
                               .arg(format));
    if (exefilename.contains(" ",Qt::CaseInsensitive))
        exefilename = "\"" + exefilename + "\"";
    if (!exefilename.isEmpty())
        ui->LEProgpath->setText(exefilename);
}// Кнопка Обзор для выбора программы до снятия скриншота

void MainWindow::on_pushButton_7_clicked()
{
    QString format = "exe";
    QString initialPath = QDir::currentPath() + tr("/untitled.") + format;
    QString exefilename = QFileDialog::getOpenFileName(this, tr("Укажите программу для запуска"),
                               initialPath,
                               tr("%1 Files (*.%2);;All Files (*)")
                               .arg(format.toUpper())
                               .arg(format));
    if (exefilename.contains(" ",Qt::CaseInsensitive))
        exefilename = "\"" + exefilename + "\"";
    if (!exefilename.isEmpty())
        ui->lineEdit_2->setText(exefilename);
}// Кнопка Обзор для выбора программы после снятия скриншота

void MainWindow::on_pushButton_8_clicked()
{
    QString format = "exe";
    QString initialPath = QDir::currentPath() + tr("/untitled.") + format;
    QString exefilename = QFileDialog::getOpenFileName(this, tr("Укажите программу для запуска"),
                               initialPath,
                               tr("%1 Files (*.%2);;All Files (*)")
                               .arg(format.toUpper())
                               .arg(format));
    if (exefilename.contains(" ",Qt::CaseInsensitive))
        exefilename = "\"" + exefilename + "\"";
    if (!exefilename.isEmpty())
            ui->lineEdit_3->setText(exefilename);
}// Кнопка Обзор для выбора программы по завершению таймера

void MainWindow::clipboardspy()
{
    if (clipboardspyactiv)
        on_pushButton_4_clicked();

/*
    qDebug() <<  QApplication::activeWindow();
    qDebug() <<  "q0";
    qDebug() <<  QApplication::activeWindow()->windowTitle();
    qDebug() <<  "q1";
    WId curwinid = QApplication::activeWindow()->winId();
    qDebug() <<  "q2";
    QRect curwingeom = QApplication::activeWindow()->geometry();
    qDebug() <<  "q3" << curwingeom;
    originalPixmap = QPixmap(); // clear image for low memory situations on embedded devices.
    originalPixmap = QPixmap::grabWindow(curwinid,curwingeom.x(),curwingeom.y(),curwingeom.width(),curwingeom.height()); //
    qDebug() <<  "q4";
    saveScreenshot();
    qDebug() <<  "q5";
*/

}// Функция действия на обновление буффера

void MainWindow::on_pushButton_9_clicked()
{
    if (clipboardspyactiv)
    {
        clipboardspyactiv = false;
        ui->label_12->setText("<span style=\" font-size:8pt; color:#FF4444;\"><b>" + tr("Не активно") + "</b></span>");
        writelog(tr("Слежение за буффером отключено"),"<span style=\" font-size:8pt; color:#FFB71E;\"><b> %1</b></span>",6,true);
    }
    else
    {
        clipboardspyactiv = true;
        ui->label_12->setText("<span style=\" font-size:8pt; color:#33DD33;\"><b>" + tr("Активно") + "</b></span>");
        writelog(tr("Слежение за буффером включено"),"<span style=\" font-size:8pt; color:#FFB71E;\"><b> %1</b></span>",6,true);
    }
}// Кнопка запуска / остановки слежения за буффером

void MainWindow::on_pushButton_10_clicked()
{
    globalarea = true;
    Screenshotarea->setGeometry(QRect (50,50, 300, 300));
    Screenshotarea->setStyleSheet("background-color: #F5EEA7;");
    Screenshotarea->setWindowOpacity(0.5);
    //Screenshotarea->setWindowFlags(Qt::CustomizeWindowHint);
    Screenshotarea->show();


    //QRect ( int x, int y, int width, int height )
    //qApp->quit();
}// Функция выделения области экрана мышью

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "click";
    //origin = event->pos();
    //if (!rubberBand)
    //    rubberBand = new QRubberBand(QRubberBand::Rectangle, this);
    //rubberBand->setGeometry(QRect(origin, QSize()));
    //rubberBand->show();
}// Функция реагирования клика мыши на главное окно

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
   ;// rubberBand->setGeometry(QRect(origin, event->pos()).normalized());
    //qDebug() << "move mouse";
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    //rubberBand->hide();
    ;
    // determine selection, for example using QRect::intersects()
    // and QRect::contains().
}

void MainWindow::on_pushButton_11_clicked()
{
    if (ui->curscreencountvalue->value()==0)
        setcreenareadefault();
    else
    {
        QRect qrectvar = QApplication::desktop()->screenGeometry(ui->curscreencountvalue->value());
        ui->CB_coorx_x1->setValue(qrectvar.x());
        ui->CB_coorx_y1->setValue(qrectvar.y());
        ui->CB_coorx_x2->setValue(qrectvar.width());
        ui->CB_coorx_y2->setValue(qrectvar.height());
    }
}// Установка области кокретного рабочего стола

void MainWindow::on_pushButton_12_clicked()
{
    localarea = true;
    Screenshotarea->setGeometry(QRect (50,50, 300, 300));
    Screenshotarea->setStyleSheet("background-color: #F5EEA7;");
    Screenshotarea->setWindowOpacity(0.5);
    //Screenshotarea->setWindowFlags(Qt::CustomizeWindowHint);
    Screenshotarea->show();

}// Добавить область в список областей

void MainWindow::on_pushButton_13_clicked()
{
    QList<QListWidgetItem *> itemlist = ui->arealist->selectedItems();
    if (itemlist.count()>0)
        delete itemlist[0];

}// Удалить из списка областей

void MainWindow::on_pushButton_14_clicked()
{
    int itemscount = ui->arealist->count();
    for (int i=1;i<=itemscount;i++)
        delete ui->arealist->item(itemscount-i);

}// Очистить список областей

void MainWindow::on_pushButton_15_clicked()
{
    QList<QListWidgetItem *> itemlist = ui->arealist->selectedItems();
    if (itemlist.count()==0)
        return;
    ui->arealist->hide();
    ui->pushButton_12->setDisabled(true);
    ui->pushButton_13->setDisabled(true);
    ui->pushButton_14->setDisabled(true);
    ui->pushButton_15->setDisabled(true);
    ui->area_save_button->show();
    ui->area_x->show();
    ui->area_y->show();
    ui->area_w->show();
    ui->area_h->show();
    ui->t_area_x->show();
    ui->t_area_y->show();
    ui->t_area_w->show();
    ui->t_area_h->show();
    QRegExp rx("\\(([-]?\\d+)\\,([-]?\\d+)\\s(\\d+)x(\\d+)\\)");
    int pos = rx.indexIn(itemlist[0]->text());
    if (pos > -1)
    {
        bool ok;
        ui->area_x->setValue(rx.cap(1).toInt(&ok,10));
        ui->area_y->setValue(rx.cap(2).toInt(&ok,10));
        ui->area_w->setValue(rx.cap(3).toInt(&ok,10));
        ui->area_h->setValue(rx.cap(4).toInt(&ok,10));
    }

}// Изменить область в списке областей

void MainWindow::on_area_save_button_clicked()
{
    ui->pushButton_12->setDisabled(false);
    ui->pushButton_13->setDisabled(false);
    ui->pushButton_14->setDisabled(false);
    ui->pushButton_15->setDisabled(false);
    ui->arealist->show();
    ui->area_save_button->hide();
    ui->area_x->hide();
    ui->area_y->hide();
    ui->area_w->hide();
    ui->area_h->hide();
    ui->t_area_x->hide();
    ui->t_area_y->hide();
    ui->t_area_w->hide();
    ui->t_area_h->hide();

    QList<QListWidgetItem *> itemlist = ui->arealist->selectedItems();
    //ui->arealist->editItem(itemlist[0]);
    itemlist[0]->setText(tr("Область ") + QString("(%1,%2 %3x%4)").arg(ui->area_x->value()).arg(ui->area_y->value()).arg(ui->area_w->value()).arg(ui->area_h->value()));

}// Сохранить изменённую область!

void MainWindow::on_pushButton_16_clicked()
{
    QString initialPath = QDir::currentPath();
    QString dirforscreens = QFileDialog::getExistingDirectory(this, tr("Укажите папку"),
                               initialPath);
    if (!dirforscreens.isEmpty())
            ui->LE_filepath->setText(dirforscreens);
}

void MainWindow::on_pushButton_17_clicked()
{
    QDesktopServices::openUrl(ui->LE_filepath->text());
}

void MainWindow::on_pushButton_18_clicked()
{
    if (pixelspy->isActive())
        pixelspy->stop();
    else
        pixelspy->start(50);
}

void MainWindow::pixelspyaction()
{
    QPoint cursorpos = QCursor::pos();
    int cursorcoor_x, cursorcoor_y;
    cursorcoor_x = cursorpos.x();
    cursorcoor_y = cursorpos.y();
    //qDebug() << cursorcoor_x << "_" << cursorcoor_y;
    QPixmap OnepixelforColour = QPixmap::grabWindow(QApplication::desktop()->screen(2)->winId(),cursorcoor_x,cursorcoor_y,1,1); //
    QRgb pixelrgb = OnepixelforColour.toImage().pixel(0,0);

    //qDebug() << pixelrgb;
    int colorred = qRed(pixelrgb);
    int colorgreen = qGreen(pixelrgb);
    int colorblue = qBlue(pixelrgb);
    //int coloralfa = qAlpha(pixelrgb);
    ui->L_RGBcolour->setText(QString::number (colorred, 16).toUpper() + " " + QString::number (colorgreen, 16).toUpper() + " " + QString::number (colorblue, 16).toUpper());
    ui->L_cursorx->setText(QString::number (cursorcoor_x));
    ui->L_cursory->setText(QString::number (cursorcoor_y));
    ui->L_red_colour->setText(QString::number (colorred));
    ui->L_greencolour->setText(QString::number (colorgreen));
    ui->L_bluecolour->setText(QString::number (colorblue));
    /*
    //Преобразуем RGB в HSV
    int MAXcolor, MINcolor,H,S,V;
    if (colorred>=colorgreen)
        if (colorred>colorblue)
            MAXcolor = colorred;
        else
            MAXcolor = colorblue;
    else
        if (colorgreen>colorblue)
            MAXcolor = colorgreen;
        else
            MAXcolor = colorblue;
    if (colorred<=colorgreen)
        if (colorred<colorblue)
            MINcolor = colorred;
        else
            MINcolor = colorblue;
    else
        if (colorgreen<colorblue)
            MINcolor = colorgreen;
        else
            MINcolor = colorblue;
    if (MAXcolor==MINcolor)
        H=0;
    else
    {
        if ((MAXcolor==colorred)&&(colorgreen>=colorblue))
            H=60*((colorgreen-colorblue)/MAXcolor-MINcolor);
        if ((MAXcolor==colorred)&&(colorgreen<colorblue))
            H=60*((colorgreen-colorblue)/MAXcolor-MINcolor)+360;
        if (MAXcolor==colorgreen)
            H=60*((colorblue-colorred)/MAXcolor-MINcolor)+120;
        if (MAXcolor==colorblue)
            H=60*((colorred-colorgreen)/MAXcolor-MINcolor)+240;
    }
    if (MAXcolor==0)
        S=0;
    else
        S=1-(MINcolor/MAXcolor);
    V = MAXcolor;
    ui->L_HSVcolour->setText(QString::number (H) + " " + QString::number (S) + " " + QString::number (V));
    */


    ui->W_currentcolour->setAutoFillBackground(true);
    ui->W_currentcolour->setPalette(QPalette(QColor(pixelrgb)));
    ui->W_currentcolour->update();




    //QRect r=QRect::QRect(i,30,5,30);
    // рисуем прямоугольник в буфер
    //p.drawRect(r);

}
