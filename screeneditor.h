#ifndef SCREENEDITOR_H
#define SCREENEDITOR_H

#include <QDialog>
#include <QPainter>
#include <QDebug>
#include <QClipboard>
#include <QRect>
#include "rwidget.h"
#include "imagelistwidgetitem.h"


namespace Ui {
    class screeneditor;
}

class screeneditor : public QDialog
{
    Q_OBJECT



public:
    explicit screeneditor(QWidget *parent = 0);
    ~screeneditor();
    void setscreen(QPixmap originalPixmap);
    RWidget *centralrwidget;
    static QPixmap GetImagePixmap(int row);

private:
    Ui::screeneditor *ui;


private slots:
    void on_toolButton_clicked(bool checked);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // SCREENEDITOR_H
