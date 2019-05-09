/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jun 23 20:17:48 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *LE_filepath;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *LEFilename;
    QLabel *label_9;
    QComboBox *CBFileformats;
    QLabel *label_7;
    QSpinBox *SBQualityFile;
    QCheckBox *CHBAskfnameflag;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QWidget *tab_5;
    QSpinBox *CB_coorx_x2;
    QLabel *label_16;
    QLabel *label_14;
    QSpinBox *CB_coorx_y1;
    QSpinBox *CB_coorx_y2;
    QPushButton *pushButton_10;
    QLabel *label_13;
    QSpinBox *CB_coorx_x1;
    QLabel *label_15;
    QLabel *label_17;
    QPushButton *pushButton_11;
    QSpinBox *curscreencountvalue;
    QCheckBox *multiareas;
    QListWidget *arealist;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QLabel *t_area_x;
    QLabel *t_area_y;
    QSpinBox *area_x;
    QSpinBox *area_y;
    QLabel *t_area_w;
    QLabel *t_area_h;
    QSpinBox *area_w;
    QSpinBox *area_h;
    QPushButton *area_save_button;
    QCheckBox *areas_only;
    QWidget *tab_2;
    QRadioButton *RBHTMLtextlog;
    QRadioButton *RBPlaintextlog;
    QLineEdit *LELogfilename;
    QCheckBox *checkBox;
    QCheckBox *checkBox_7;
    QWidget *tab_3;
    QLineEdit *lineEdit_3;
    QLineEdit *LEProgpath;
    QLineEdit *lineEdit_2;
    QCheckBox *CHBProgflag;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *tab_4;
    QRadioButton *radioButton;
    QSpinBox *SBTimeout;
    QLabel *TimerStatusLebel;
    QLabel *label_3;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_3;
    QRadioButton *radioButton_6;
    QCheckBox *timeractionnow;
    QWidget *tab_6;
    QPushButton *pushButton_18;
    QLabel *label_18;
    QLabel *L_RGBcolour;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *L_cursorx;
    QLabel *L_cursory;
    QWidget *W_currentcolour;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *L_bluecolour;
    QLabel *L_greencolour;
    QLabel *L_red_colour;
    QLabel *label_24;
    QLabel *L_HSVcolour;
    QWidget *tab_7;
    QPushButton *pushButton_19;
    QSpinBox *SB_logtype;
    QLabel *label_25;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QTextBrowser *LogEdit;
    QTableWidget *LogTable;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(492, 603);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 270, 161, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(390, 10, 91, 23));
        pushButton_2->setFont(font);
        pushButton_2->setCheckable(false);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 270, 201, 23));
        pushButton_4->setFont(font);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(140, 10, 191, 21));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(390, 270, 91, 23));
        pushButton_5->setFont(font);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 330, 471, 231));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        LE_filepath = new QLineEdit(tab);
        LE_filepath->setObjectName(QString::fromUtf8("LE_filepath"));
        LE_filepath->setGeometry(QRect(120, 100, 211, 20));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 101, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 101, 16));
        LEFilename = new QLineEdit(tab);
        LEFilename->setObjectName(QString::fromUtf8("LEFilename"));
        LEFilename->setGeometry(QRect(120, 70, 331, 20));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 100, 91, 16));
        CBFileformats = new QComboBox(tab);
        CBFileformats->setObjectName(QString::fromUtf8("CBFileformats"));
        CBFileformats->setGeometry(QRect(120, 10, 331, 22));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 70, 101, 16));
        SBQualityFile = new QSpinBox(tab);
        SBQualityFile->setObjectName(QString::fromUtf8("SBQualityFile"));
        SBQualityFile->setGeometry(QRect(120, 40, 51, 22));
        SBQualityFile->setValue(1);
        CHBAskfnameflag = new QCheckBox(tab);
        CHBAskfnameflag->setObjectName(QString::fromUtf8("CHBAskfnameflag"));
        CHBAskfnameflag->setGeometry(QRect(10, 150, 301, 17));
        CHBAskfnameflag->setFont(font);
        checkBox_3 = new QCheckBox(tab);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 130, 291, 17));
        checkBox_3->setFont(font);
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 170, 291, 23));
        pushButton_9->setFont(font);
        pushButton_16 = new QPushButton(tab);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(340, 100, 31, 23));
        pushButton_16->setFont(font);
        pushButton_17 = new QPushButton(tab);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(380, 100, 71, 23));
        pushButton_17->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        CB_coorx_x2 = new QSpinBox(tab_5);
        CB_coorx_x2->setObjectName(QString::fromUtf8("CB_coorx_x2"));
        CB_coorx_x2->setGeometry(QRect(30, 100, 121, 22));
        CB_coorx_x2->setMinimum(-999999999);
        CB_coorx_x2->setMaximum(999999999);
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 100, 41, 16));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 40, 21, 20));
        CB_coorx_y1 = new QSpinBox(tab_5);
        CB_coorx_y1->setObjectName(QString::fromUtf8("CB_coorx_y1"));
        CB_coorx_y1->setGeometry(QRect(30, 70, 121, 22));
        CB_coorx_y1->setMinimum(-999999999);
        CB_coorx_y1->setMaximum(999999999);
        CB_coorx_y2 = new QSpinBox(tab_5);
        CB_coorx_y2->setObjectName(QString::fromUtf8("CB_coorx_y2"));
        CB_coorx_y2->setGeometry(QRect(30, 130, 121, 22));
        CB_coorx_y2->setMinimum(-999999999);
        CB_coorx_y2->setMaximum(999999999);
        pushButton_10 = new QPushButton(tab_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 170, 141, 21));
        pushButton_10->setFont(font);
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 10, 151, 16));
        CB_coorx_x1 = new QSpinBox(tab_5);
        CB_coorx_x1->setObjectName(QString::fromUtf8("CB_coorx_x1"));
        CB_coorx_x1->setGeometry(QRect(30, 40, 121, 22));
        CB_coorx_x1->setMinimum(-999999999);
        CB_coorx_x1->setMaximum(999999999);
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 70, 41, 16));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 130, 41, 16));
        pushButton_11 = new QPushButton(tab_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(170, 170, 231, 23));
        pushButton_11->setFont(font);
        curscreencountvalue = new QSpinBox(tab_5);
        curscreencountvalue->setObjectName(QString::fromUtf8("curscreencountvalue"));
        curscreencountvalue->setGeometry(QRect(410, 170, 42, 22));
        multiareas = new QCheckBox(tab_5);
        multiareas->setObjectName(QString::fromUtf8("multiareas"));
        multiareas->setGeometry(QRect(170, 10, 271, 17));
        multiareas->setFont(font);
        arealist = new QListWidget(tab_5);
        arealist->setObjectName(QString::fromUtf8("arealist"));
        arealist->setGeometry(QRect(170, 40, 281, 81));
        pushButton_12 = new QPushButton(tab_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(170, 130, 71, 23));
        pushButton_12->setFont(font);
        pushButton_13 = new QPushButton(tab_5);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(250, 130, 61, 23));
        pushButton_13->setFont(font);
        pushButton_14 = new QPushButton(tab_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(390, 130, 61, 23));
        pushButton_14->setFont(font);
        pushButton_15 = new QPushButton(tab_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(320, 130, 61, 23));
        pushButton_15->setFont(font);
        t_area_x = new QLabel(tab_5);
        t_area_x->setObjectName(QString::fromUtf8("t_area_x"));
        t_area_x->setGeometry(QRect(180, 40, 21, 16));
        t_area_x->setFont(font);
        t_area_y = new QLabel(tab_5);
        t_area_y->setObjectName(QString::fromUtf8("t_area_y"));
        t_area_y->setGeometry(QRect(180, 70, 21, 16));
        t_area_y->setFont(font);
        area_x = new QSpinBox(tab_5);
        area_x->setObjectName(QString::fromUtf8("area_x"));
        area_x->setGeometry(QRect(200, 40, 91, 22));
        area_x->setMinimum(-999999999);
        area_x->setMaximum(999999999);
        area_x->setValue(0);
        area_y = new QSpinBox(tab_5);
        area_y->setObjectName(QString::fromUtf8("area_y"));
        area_y->setGeometry(QRect(200, 70, 91, 22));
        area_y->setMinimum(-999999999);
        area_y->setMaximum(999999999);
        t_area_w = new QLabel(tab_5);
        t_area_w->setObjectName(QString::fromUtf8("t_area_w"));
        t_area_w->setGeometry(QRect(310, 40, 21, 16));
        t_area_w->setFont(font);
        t_area_h = new QLabel(tab_5);
        t_area_h->setObjectName(QString::fromUtf8("t_area_h"));
        t_area_h->setGeometry(QRect(310, 70, 21, 16));
        t_area_h->setFont(font);
        area_w = new QSpinBox(tab_5);
        area_w->setObjectName(QString::fromUtf8("area_w"));
        area_w->setGeometry(QRect(340, 40, 111, 22));
        area_w->setMinimum(-999999999);
        area_w->setMaximum(999999999);
        area_h = new QSpinBox(tab_5);
        area_h->setObjectName(QString::fromUtf8("area_h"));
        area_h->setGeometry(QRect(340, 70, 111, 22));
        area_h->setMinimum(-999999999);
        area_h->setMaximum(999999999);
        area_save_button = new QPushButton(tab_5);
        area_save_button->setObjectName(QString::fromUtf8("area_save_button"));
        area_save_button->setGeometry(QRect(370, 100, 81, 23));
        area_save_button->setFont(font);
        areas_only = new QCheckBox(tab_5);
        areas_only->setObjectName(QString::fromUtf8("areas_only"));
        areas_only->setGeometry(QRect(380, 10, 81, 17));
        areas_only->setFont(font);
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        RBHTMLtextlog = new QRadioButton(tab_2);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(RBHTMLtextlog);
        RBHTMLtextlog->setObjectName(QString::fromUtf8("RBHTMLtextlog"));
        RBHTMLtextlog->setGeometry(QRect(250, 70, 201, 17));
        RBHTMLtextlog->setFont(font);
        RBPlaintextlog = new QRadioButton(tab_2);
        buttonGroup_2->addButton(RBPlaintextlog);
        RBPlaintextlog->setObjectName(QString::fromUtf8("RBPlaintextlog"));
        RBPlaintextlog->setGeometry(QRect(10, 70, 221, 17));
        RBPlaintextlog->setFont(font);
        RBPlaintextlog->setChecked(true);
        LELogfilename = new QLineEdit(tab_2);
        LELogfilename->setObjectName(QString::fromUtf8("LELogfilename"));
        LELogfilename->setGeometry(QRect(200, 10, 251, 20));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 10, 171, 17));
        checkBox->setFont(font);
        checkBox_7 = new QCheckBox(tab_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(10, 40, 441, 17));
        checkBox_7->setFont(font);
        checkBox_7->setChecked(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 160, 361, 20));
        LEProgpath = new QLineEdit(tab_3);
        LEProgpath->setObjectName(QString::fromUtf8("LEProgpath"));
        LEProgpath->setGeometry(QRect(10, 40, 361, 20));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 100, 361, 20));
        CHBProgflag = new QCheckBox(tab_3);
        CHBProgflag->setObjectName(QString::fromUtf8("CHBProgflag"));
        CHBProgflag->setGeometry(QRect(10, 10, 301, 17));
        CHBProgflag->setFont(font);
        checkBox_6 = new QCheckBox(tab_3);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(10, 130, 301, 17));
        checkBox_6->setFont(font);
        checkBox_2 = new QCheckBox(tab_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 70, 291, 17));
        checkBox_2->setFont(font);
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(380, 40, 75, 23));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(380, 100, 75, 23));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(380, 160, 75, 23));
        pushButton_8->setFont(font);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        radioButton = new QRadioButton(tab_4);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 40, 151, 17));
        radioButton->setFont(font);
        radioButton->setChecked(true);
        SBTimeout = new QSpinBox(tab_4);
        SBTimeout->setObjectName(QString::fromUtf8("SBTimeout"));
        SBTimeout->setGeometry(QRect(70, 60, 91, 22));
        SBTimeout->setMaximum(999999999);
        SBTimeout->setSingleStep(500);
        SBTimeout->setValue(60000);
        TimerStatusLebel = new QLabel(tab_4);
        TimerStatusLebel->setObjectName(QString::fromUtf8("TimerStatusLebel"));
        TimerStatusLebel->setGeometry(QRect(60, 10, 101, 16));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 61, 20));
        radioButton_2 = new QRadioButton(tab_4);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(230, 40, 151, 17));
        radioButton_2->setFont(font);
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 51, 16));
        radioButton_3 = new QRadioButton(tab_4);
        buttonGroup_3 = new QButtonGroup(MainWindow);
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 90, 111, 17));
        radioButton_3->setFont(font);
        radioButton_3->setChecked(true);
        radioButton_4 = new QRadioButton(tab_4);
        buttonGroup_3->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(140, 90, 101, 17));
        radioButton_4->setFont(font);
        radioButton_5 = new QRadioButton(tab_4);
        buttonGroup_3->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(250, 90, 81, 17));
        radioButton_5->setFont(font);
        checkBox_4 = new QCheckBox(tab_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 110, 251, 21));
        checkBox_4->setFont(font);
        checkBox_5 = new QCheckBox(tab_4);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 140, 161, 21));
        checkBox_5->setFont(font);
        dateTimeEdit = new QDateTimeEdit(tab_4);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(170, 140, 151, 22));
        dateTimeEdit->setDateTime(QDateTime(QDate(2011, 1, 1), QTime(0, 0, 0)));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 170, 151, 23));
        pushButton_3->setFont(font);
        radioButton_6 = new QRadioButton(tab_4);
        buttonGroup_3->addButton(radioButton_6);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(350, 90, 82, 17));
        radioButton_6->setFont(font);
        timeractionnow = new QCheckBox(tab_4);
        timeractionnow->setObjectName(QString::fromUtf8("timeractionnow"));
        timeractionnow->setGeometry(QRect(180, 170, 261, 17));
        timeractionnow->setFont(font);
        timeractionnow->setChecked(true);
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        pushButton_18 = new QPushButton(tab_6);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(10, 10, 161, 21));
        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 100, 71, 16));
        L_RGBcolour = new QLabel(tab_6);
        L_RGBcolour->setObjectName(QString::fromUtf8("L_RGBcolour"));
        L_RGBcolour->setGeometry(QRect(90, 100, 71, 16));
        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(190, 10, 21, 16));
        label_20 = new QLabel(tab_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(190, 30, 21, 16));
        L_cursorx = new QLabel(tab_6);
        L_cursorx->setObjectName(QString::fromUtf8("L_cursorx"));
        L_cursorx->setGeometry(QRect(210, 10, 71, 16));
        L_cursory = new QLabel(tab_6);
        L_cursory->setObjectName(QString::fromUtf8("L_cursory"));
        L_cursory->setGeometry(QRect(210, 30, 71, 16));
        W_currentcolour = new QWidget(tab_6);
        W_currentcolour->setObjectName(QString::fromUtf8("W_currentcolour"));
        W_currentcolour->setGeometry(QRect(249, 10, 201, 31));
        W_currentcolour->setStyleSheet(QString::fromUtf8(""));
        label_21 = new QLabel(tab_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 40, 71, 16));
        label_22 = new QLabel(tab_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 60, 71, 16));
        label_23 = new QLabel(tab_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 80, 71, 16));
        L_bluecolour = new QLabel(tab_6);
        L_bluecolour->setObjectName(QString::fromUtf8("L_bluecolour"));
        L_bluecolour->setGeometry(QRect(90, 80, 71, 16));
        L_greencolour = new QLabel(tab_6);
        L_greencolour->setObjectName(QString::fromUtf8("L_greencolour"));
        L_greencolour->setGeometry(QRect(90, 60, 71, 16));
        L_red_colour = new QLabel(tab_6);
        L_red_colour->setObjectName(QString::fromUtf8("L_red_colour"));
        L_red_colour->setGeometry(QRect(90, 40, 71, 16));
        label_24 = new QLabel(tab_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 120, 71, 16));
        L_HSVcolour = new QLabel(tab_6);
        L_HSVcolour->setObjectName(QString::fromUtf8("L_HSVcolour"));
        L_HSVcolour->setGeometry(QRect(90, 120, 71, 16));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        pushButton_19 = new QPushButton(tab_7);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(370, 10, 85, 27));
        SB_logtype = new QSpinBox(tab_7);
        SB_logtype->setObjectName(QString::fromUtf8("SB_logtype"));
        SB_logtype->setGeometry(QRect(100, 10, 47, 23));
        SB_logtype->setValue(2);
        label_25 = new QLabel(tab_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(20, 10, 81, 21));
        tabWidget->addTab(tab_7, QString());
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 300, 111, 16));
        label_2->setFont(font1);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(130, 300, 91, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(230, 300, 151, 16));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(380, 300, 101, 16));
        LogEdit = new QTextBrowser(centralWidget);
        LogEdit->setObjectName(QString::fromUtf8("LogEdit"));
        LogEdit->setGeometry(QRect(10, 40, 471, 221));
        LogTable = new QTableWidget(centralWidget);
        LogTable->setObjectName(QString::fromUtf8("LogTable"));
        LogTable->setGeometry(QRect(10, 40, 471, 221));
        LogTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        LogTable->setTabKeyNavigation(false);
        LogTable->setProperty("showDropIndicator", QVariant(false));
        LogTable->setDragDropOverwriteMode(false);
        LogTable->setAlternatingRowColors(true);
        MainWindow->setCentralWidget(centralWidget);
        LogTable->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        label_8->raise();
        pushButton_5->raise();
        tabWidget->raise();
        label_2->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        LogEdit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 492, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setFont(font);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        CBFileformats->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SaveScr", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\320\233\320\276\320\263:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202 \321\201\320\265\320\271\321\207\320\260\321\201", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202 \320\270\320\267 \320\261\321\203\321\204\321\204\320\265\321\200\320\260", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "_", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\273\320\276\320\263", 0, QApplication::UnicodeUTF8));
        LE_filepath->setText(QApplication::translate("MainWindow", "screenshots", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\320\244\320\276\321\200\320\274\320\260\321\202 \321\204\320\260\320\271\320\273\320\260:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\232\320\260\321\207\320\265\321\201\321\202\320\262\320\276:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        LEFilename->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">\320\222 \320\270\320\274\320\265\320\275\320\270 \321\204\320\260\320\271\320\273\320\260:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">yyyy - \321\202\320\265\320\272\321\203\321\211\320\270\320\271 \320\263\320\276\320\264</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">MM - \320\274\320\265\321\201\321\217\321\206</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">dd - \320\264\320\265\320\275\321\214 \320\274\320\265\321\201\321\217\321\206\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">hh - \321\207\320\260\321\201</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">mm - \320\274\320\270\320\275\321\203\321\202\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">ss - \321\201\320\265\320\272\321\203\320\275\320\264\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">zzz - \320\274\320\270\320\273\320\270\321\201\320\265\320\272\321\203\320\275\320\264\320\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\320\237\321\203\321\202\321\214:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CBFileformats->clear();
        CBFileformats->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "BMP - Windows Bitmap (*.bmp)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "JPG - Joint Photographic Experts Group (*.jpg)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "JPEG - Joint Photographic Experts Group (*.jpeg)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "PNG - Portable Network Graphics (*.png)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "PPM - Portable Pixmap (*.ppm)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "XBM - X11 Bitmap (*.x11)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "XPM - X11 Pixmap (*.xpm)", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CHBAskfnameflag->setText(QApplication::translate("MainWindow", "\320\267\320\260\320\277\321\200\320\260\321\210\320\270\320\262\320\260\321\202\321\214 \320\270\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("MainWindow", "\320\241\320\272\321\200\321\213\320\262\320\260\321\202\321\214 \320\276\320\272\320\275\320\276 \320\262\320\276 \320\262\321\200\320\265\320\274\321\217 \321\201\320\275\321\217\321\202\320\270\321\217 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214/\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\273\320\265\320\266\320\265\320\275\320\270\320\265 \320\267\320\260 \320\261\321\203\321\204\321\204\320\265\321\200\320\276\320\274", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\265", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">W:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">X:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\276\320\267\320\275\320\260\321\207\320\270\321\202\321\214 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "<b>\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\200\320\260\321\201\321\210\320\265\321\200\320\265\320\275\320\270\321\217:</b>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Y:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">H:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\276\320\267\320\275\320\260\321\207\320\270\321\202\321\214 \320\272\320\276\320\275\320\272\321\200\320\265\321\202\320\275\321\213\320\271 \321\200\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273", 0, QApplication::UnicodeUTF8));
        multiareas->setText(QApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\276\320\261\320\273\320\260\321\201\321\202\320\265\320\271:", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        t_area_x->setText(QApplication::translate("MainWindow", "X:", 0, QApplication::UnicodeUTF8));
        t_area_y->setText(QApplication::translate("MainWindow", "Y:", 0, QApplication::UnicodeUTF8));
        t_area_w->setText(QApplication::translate("MainWindow", "W:", 0, QApplication::UnicodeUTF8));
        t_area_h->setText(QApplication::translate("MainWindow", "H:", 0, QApplication::UnicodeUTF8));
        area_save_button->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        areas_only->setText(QApplication::translate("MainWindow", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\270\321\205", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\320\236\320\261\320\273\320\260\321\201\321\202\321\214", 0, QApplication::UnicodeUTF8));
        RBHTMLtextlog->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\213\320\262\320\260\321\202\321\214 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 HTML", 0, QApplication::UnicodeUTF8));
        RBPlaintextlog->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\213\320\262\320\260\321\202\321\214 \320\262 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\320\276\320\274 \321\200\320\265\320\266\320\270\320\274\320\265", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\213\320\262\320\260\321\202\321\214 \320\273\320\276\320\263 \320\262 \321\204\320\260\320\271\320\273:", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\277\321\203\321\202\321\214 \320\264\320\273\321\217 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202\320\276\320\262 \320\272\320\276\321\200\320\275\320\265\320\262\321\213\320\274", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\233\320\276\320\263", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QApplication::translate("MainWindow", "1.exe param1", 0, QApplication::UnicodeUTF8));
        LEProgpath->setText(QApplication::translate("MainWindow", "1.exe param1 param2", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("MainWindow", "1.exe $1 del hide", 0, QApplication::UnicodeUTF8));
        CHBProgflag->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\277\320\265\321\200\320\265\320\264 \321\201\320\275\321\217\321\202\320\270\320\265\320\274 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202\320\260:", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\277\320\276\321\201\320\273\320\265 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\321\216 \321\202\320\260\320\271\320\274\320\265\321\200\320\260:", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\277\320\276\321\201\320\273\320\265 \321\201\320\275\321\217\321\202\320\270\321\217 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202\320\260:", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\213\321\207\320\275\321\213\320\271 \321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202", 0, QApplication::UnicodeUTF8));
        TimerStatusLebel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">_</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\242\320\260\320\271\320\274\320\260\321\203\321\202:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\230\320\267 \320\261\321\203\321\204\321\204\320\265\321\200\320\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\241\321\202\320\260\321\202\321\203\321\201:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\273\320\270\321\201\320\265\320\272\321\203\320\275\320\264\321\213", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MainWindow", "\320\241\320\265\320\272\321\203\320\275\320\264\321\213", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\321\203\321\202\321\213", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("MainWindow", "\320\241\320\262\320\265\321\200\320\275\321\203\321\202\321\214 \320\276\320\272\320\275\320\276 \320\277\320\276\320\272\320\260 \321\200\320\260\320\261\320\276\321\202\320\260\320\265\321\202 \321\202\320\260\320\271\320\274\320\265\321\200", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \320\272\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202/\321\201\321\202\320\276\320\277 \321\202\320\260\320\271\320\274\320\265\321\200\320\260", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\213", 0, QApplication::UnicodeUTF8));
        timeractionnow->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\201\321\200\320\260\320\267\321\203", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\320\242\320\260\320\271\320\274\320\265\321\200", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214/\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "RGB:", 0, QApplication::UnicodeUTF8));
        L_RGBcolour->setText(QApplication::translate("MainWindow", "00 00 00", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "X:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Y:", 0, QApplication::UnicodeUTF8));
        L_cursorx->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        L_cursory->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "\320\241\320\270\320\275\320\270\320\271:", 0, QApplication::UnicodeUTF8));
        L_bluecolour->setText(QApplication::translate("MainWindow", "---", 0, QApplication::UnicodeUTF8));
        L_greencolour->setText(QApplication::translate("MainWindow", "---", 0, QApplication::UnicodeUTF8));
        L_red_colour->setText(QApplication::translate("MainWindow", "---", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "HSV:", 0, QApplication::UnicodeUTF8));
        L_HSVcolour->setText(QApplication::translate("MainWindow", "00 00 00", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\277\320\276\320\264 \320\272\321\203\321\200\321\201\320\276\321\200\320\276\320\274", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\273\320\276\320\263\320\260", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<b>\320\241\321\202\320\260\321\202\321\203\321\201 \321\202\320\260\320\271\320\274\320\265\321\200\320\260:</b>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "<b>_</b>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "<b>\320\241\320\273\320\265\320\266\320\265\320\275\320\270\320\265 \320\267\320\260 \320\261\321\203\321\204\321\204\320\265\321\200\320\276\320\274:</b>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "<b>_</b>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
