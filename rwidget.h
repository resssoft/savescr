#ifndef RWIDGET_H
#define RWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QRect>
#include <QColor>
#include <QMouseEvent>
#include <QList>
#include <QDebug>
#include <QDropEvent>
#include <QMimeData>
#include <QListWidgetItem>

class RWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RWidget(QWidget *parent = 0);
    QPixmap pixmapforrenering;
    int penactivity;
    QList<int> pointwidth;
    int pwidth;
    QList<QColor> curcolour;
    QColor pcurcolour;
    QVector <QPolygon> points;
    int linenums;
    void setpointwidth(int w);
    void setcurcolour(QColor c);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void dropEvent(QDropEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
};

#endif // RWIDGET_H
