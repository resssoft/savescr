/********************************************************************************
** Form generated from reading UI file 'screeneditor.ui'
**
** Created: Sat Jun 25 23:24:59 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENEDITOR_H
#define UI_SCREENEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include <qcolorpicker.h>

QT_BEGIN_NAMESPACE

class Ui_screeneditor
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QColorPicker *pushButton_3;
    QToolButton *toolButton;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QListWidget *listWidget;
    QLabel *label_4;

    void setupUi(QDialog *screeneditor)
    {
        if (screeneditor->objectName().isEmpty())
            screeneditor->setObjectName(QString::fromUtf8("screeneditor"));
        screeneditor->resize(826, 564);
        scrollArea = new QScrollArea(screeneditor);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 30, 601, 521));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 599, 519));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(screeneditor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 520, 201, 31));
        pushButton_2 = new QPushButton(screeneditor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 480, 201, 31));
        scrollArea_2 = new QScrollArea(screeneditor);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(620, 30, 201, 431));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 183, 900));
        scrollAreaWidgetContents_2->setMinimumSize(QSize(0, 900));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 70, 71, 21));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(16, 40, 101, 21));
        spinBox = new QSpinBox(scrollAreaWidgetContents_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 40, 47, 23));
        pushButton_3 = new QColorPicker(scrollAreaWidgetContents_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 70, 21, 21));
        toolButton = new QToolButton(scrollAreaWidgetContents_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(10, 10, 21, 21));
        tableWidget = new QTableWidget(scrollAreaWidgetContents_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 380, 161, 141));
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 350, 81, 20));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 111, 161, 231));
        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 90, 151, 21));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        retranslateUi(screeneditor);

        QMetaObject::connectSlotsByName(screeneditor);
    } // setupUi

    void retranslateUi(QDialog *screeneditor)
    {
        screeneditor->setWindowTitle(QApplication::translate("screeneditor", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("screeneditor", "Close & don`t save", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("screeneditor", "Save", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("screeneditor", "\320\246\320\262\320\265\321\202:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("screeneditor", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\270", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QString());
        toolButton->setText(QApplication::translate("screeneditor", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("screeneditor", "\320\241\320\273\320\276\320\270:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("screeneditor", "\320\250\320\260\320\261\320\273\320\276\320\275\321\213 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\271:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class screeneditor: public Ui_screeneditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENEDITOR_H
