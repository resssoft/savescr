/********************************************************************************
** Form generated from reading UI file 'screenshotarea.ui'
**
** Created: Tue 11. Jan 22:38:04 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTAREA_H
#define UI_SCREENSHOTAREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenshotArea
{
public:

    void setupUi(QWidget *ScreenshotArea)
    {
        if (ScreenshotArea->objectName().isEmpty())
            ScreenshotArea->setObjectName(QString::fromUtf8("ScreenshotArea"));
        ScreenshotArea->resize(388, 299);

        retranslateUi(ScreenshotArea);

        QMetaObject::connectSlotsByName(ScreenshotArea);
    } // setupUi

    void retranslateUi(QWidget *ScreenshotArea)
    {
        ScreenshotArea->setWindowTitle(QApplication::translate("ScreenshotArea", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ScreenshotArea: public Ui_ScreenshotArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTAREA_H
