#include "qcolorpicker.h"

QColorPicker::QColorPicker(QWidget *parent) : QPushButton(parent)
{
    currentColor = QColor::fromRgb(0,0,0);
}

QColorPicker::~QColorPicker() {
}
void QColorPicker::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.fillRect(rect(), currentColor);
    //p.setPen(currentColor);
    //p.setBrush(QBrush(currentColor));
    //p.drawEllipse(rect());
}

void QColorPicker::mousePressEvent ( QMouseEvent * event ) {
    QColorDialog dlg;
    dlg.setCurrentColor(currentColor);
    if (dlg.exec()) {
        currentColor = dlg.currentColor();
        repaint();
    }
}


