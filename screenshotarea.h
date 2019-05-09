#ifndef SCREENSHOTAREA_H
#define SCREENSHOTAREA_H

#include <QWidget>
#include <QMouseEvent>
#include <QPixmap>
#include <QVBoxLayout>
#include <QPoint>

namespace Ui {
    class ScreenshotArea;
}

class ScreenshotArea : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenshotArea(QWidget *parent = 0);
    ~ScreenshotArea();
    bool bIsDown;
    int x1,y1;

protected:
    void hideEvent(QHideEvent *event );
    void changeEvent(QEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void  mouseDoubleClickEvent(QMouseEvent *e);

signals:
    void screenshotareahidden(QRect areageometry);

private:
    Ui::ScreenshotArea *ui;
};

#endif // SCREENSHOTAREA_H
