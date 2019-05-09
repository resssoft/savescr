#include "screeneditor.h"
#include "ui_screeneditor.h"

screeneditor::screeneditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screeneditor)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(true);
    QRect sag = ui->scrollArea->geometry();
    ui->scrollArea->setGeometry(sag);

    ui->listWidget->setAlternatingRowColors(true);
    QListWidgetItem* new_item;
    new_item = new ImageListWidgetItem(QString("QPushButtonItem 1"), ui->listWidget,QPixmap("00_youtube_mask_320x240.png").scaled(QSize(159,159),Qt::KeepAspectRatio));
    //ui->listWidget->ad
    //ui->listWidget->addItem(new QListWidgetItem(QString("Standard QListWidgetItem 2")));
    new_item = new ImageListWidgetItem(QString("QPushButtonItem 2"), ui->listWidget,QPixmap("00_virtualbox-vbox-256px.png").scaled(QSize(159,159),Qt::KeepAspectRatio));
    //ui->listWidget->addItem(new QListWidgetItem(QString("Standard QListWidgetItem 3")));
    new_item = new ImageListWidgetItem(QString("QPushButtonItem 3"), ui->listWidget,QPixmap("00_youtube_mask_320x240.png").scaled(QSize(159,159),Qt::KeepAspectRatio));
    //ui->listWidget->addItem(new QListWidgetItem(QString("Standard QListWidgetItem 4")));

    //drag-and-drop
    //виджет, из которого будут "тащиться" данные
        ui->listWidget->setMovement(QListView::Static);
        ui->listWidget->setDragDropMode(QAbstractItemView::DragOnly);
        ui->listWidget->setResizeMode(QListView::Fixed);
        ui->listWidget->setDefaultDropAction(Qt::CopyAction);

        //centralrwidget->setAcceptDrops(true);
        //виджет, в которы будут "тащиться" данные
        //centralrwidget->setMovement(QListView::Static); //Snap
        //centralrwidget->setDragDropMode(QAbstractItemView::DragDrop);
        //centralrwidget->setResizeMode(QListView::Fixed);
        //centralrwidget->setDefaultDropAction(Qt::MoveAction);
}

QPixmap screeneditor::GetImagePixmap(int row)
{
    //qDebug() << "__" << ui->listWidget->selectedItems().at(0)->text();
}

screeneditor::~screeneditor()
{
    delete ui;
}

void screeneditor::setscreen(QPixmap originalPixmap)
{
    centralrwidget = new RWidget();
    centralrwidget->penactivity = 1;
    ui->scrollArea->setWidget(centralrwidget);
    centralrwidget->setMinimumSize(1200,1200);
    QRect currect = centralrwidget->geometry();
    centralrwidget->setGeometry(currect.x(),currect.y(),originalPixmap.width(),originalPixmap.height());
    centralrwidget->pixmapforrenering = originalPixmap;
    centralrwidget->setMinimumSize(originalPixmap.width(),originalPixmap.height());
    qDebug() << "before" << ui->spinBox->value() << ui->pushButton_3->currentColor;
    centralrwidget->setpointwidth(1);
    centralrwidget->setcurcolour(Qt::black);
    qDebug() << "after";
}

void screeneditor::on_pushButton_2_clicked()
{
    // Save button
    QPixmap forsavepixmap;
    forsavepixmap = QPixmap::grabWidget(centralrwidget);
    forsavepixmap.save("originalPixmap.png", "PNG");
}

void screeneditor::on_pushButton_clicked()
{
    // Close button
    close();
}


/*
 */

void screeneditor::on_toolButton_clicked(bool checked)
{
    qDebug() << checked << ui->spinBox->value() << ui->pushButton_3->currentColor;
    centralrwidget->setpointwidth(ui->spinBox->value());
    centralrwidget->setcurcolour(ui->pushButton_3->currentColor);
}
