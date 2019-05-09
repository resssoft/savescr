#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QTextCodec>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
