#include "rwidget.h"
#include "screeneditor.h"

RWidget::RWidget(QWidget *parent) :
    QWidget(parent)
{
    linenums = 0;
    points.append(QPolygon());
    setpointwidth(1);
    setcurcolour(Qt::black);
    curcolour.append(QColor());
    curcolour[linenums] = pcurcolour;
    pointwidth.append(0);
    pointwidth[linenums] = pwidth;
    setAcceptDrops(true);
}

void RWidget::dropEvent(QDropEvent *event)
 {
    int row, col;
    //qDebug() << "drop" << event->pos() << event->mimeData()->hasImage();
    QByteArray encoded = event->mimeData()->data("application/x-qabstractitemmodeldatalist");
    QDataStream stream(&encoded, QIODevice::ReadOnly);

    while (!stream.atEnd())
    {
        QMap<int,  QVariant> roleDataMap;
        stream >> row >> col >> roleDataMap; // все значения ролей установленные для элемента в row,col (см. Qt::ItemDataRole)
        //qDebug() << "row-col" << row << col << roleDataMap;
        screeneditor::GetImagePixmap(row);
    }
    qDebug() << "hasimage" << event->mimeData()->hasImage();
    //QPixmap curpixmap = screeneditor::GetImagePixmap(row);
    //event->acceptProposedAction();
 }

void RWidget::dragEnterEvent(QDragEnterEvent *event)
{
    event->accept();
    qDebug() << "===";
    qDebug() << "==" << event->format() << "==" << event->type() << "==";
}

void RWidget::paintEvent(QPaintEvent *event)
{
    QPainter paintimage(this);
    paintimage.drawPixmap(0,0,pixmapforrenering.width(),pixmapforrenering.height(),pixmapforrenering);
    if (penactivity)
    {
        QPainter paint(this);
        QPen penpen;
        for (int j=1; j<=linenums; j++)
        {
            qDebug() << "curcolour.count " << curcolour.count() << "points.count()" << points.count();
            penpen.setColor(curcolour[j]);
            penpen.setWidth(pointwidth[j]);
            paint.setPen(penpen);
            paint.drawPolyline(points[j]); //,Qt::WindingFill drawPoints  drawPolyline
        }
    }
}

void RWidget::mouseMoveEvent(QMouseEvent *event)
{
    points.append(QPolygon());
    points[linenums].append(QPoint(event->x(),event->y()));
    this->update();
}

void RWidget::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "click" << linenums;
    if (penactivity)
    {
        linenums++;
        curcolour.append(QColor());
        curcolour[linenums] = pcurcolour;
        pointwidth.append(0);
        pointwidth[linenums] = pwidth;
    }
}

void RWidget::setpointwidth(int w)
{
    qDebug() << linenums << w;
    pwidth = w;
}

void RWidget::setcurcolour(QColor c)
{
    qDebug() << linenums << c;
    pcurcolour = c;
}
