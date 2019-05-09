#ifndef QCOLORPICKER_H
#define QCOLORPICKER_H

#include <QPushButton>
#include <QPaintEvent>
#include <QColorDialog>
//#include <QPainter>
#include <QtGui>
#include <QPixmap>

class QColorPicker : public QPushButton {
     Q_OBJECT
 public:
     QColorPicker(QWidget *parent = 0);
     ~QColorPicker();
     void paintEvent(QPaintEvent *);
     void mousePressEvent ( QMouseEvent * event );
     QColor currentColor;


     //QPixmap currentIcon;
     //void setIcon(QPixmap pixmap);
     //QPixmap icon();
 };
#endif
