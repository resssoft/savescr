#include "screenshotarea.h"
#include "ui_screenshotarea.h"

ScreenshotArea::ScreenshotArea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScreenshotArea)
{
    ui->setupUi(this);

    //this->setGeometry(QRect (50,50, 300, 300));
    //this->setStyleSheet("background-color: #F5EEA7;");
    //this->setWindowOpacity(0.5);


    //this->setWindowTitle(tr("Область экрана"));
    //this->setWindowState(Qt::WindowNoState);
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //this->show();
}

ScreenshotArea::~ScreenshotArea()
{
    delete ui;
}

void ScreenshotArea::hideEvent(QHideEvent *event )
{
    emit screenshotareahidden(QRect(this->x(),this->y(),this->width(),this->height()));
}

void ScreenshotArea::changeEvent(QEvent *e)
{
    bIsDown = false;
}

void ScreenshotArea::mousePressEvent(QMouseEvent *e)
{
    bIsDown = true;
    x1 = e->x();
    y1 = e->y();
}

void ScreenshotArea::mouseMoveEvent(QMouseEvent *e)
{
    if(bIsDown)
        this->move(QPoint(this->pos().x() + e->x() - x1, this->pos().y() + e->y() - y1));

}

void ScreenshotArea::mouseDoubleClickEvent(QMouseEvent *e)
{
    this->hide();
}
