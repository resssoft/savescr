#include "imagelistwidgetitem.h"

ImageListWidgetItem::ImageListWidgetItem(const QString text, QListWidget* view, QPixmap imagepixmap)
    : QListWidgetItem(view)
{
    QWidget* widget = new QWidget;
    QGridLayout* layout = new QGridLayout();
    QLabel *label = new QLabel();
    label->setPixmap(imagepixmap);
    layout->addWidget(label, 0, 0);
    widget->setLayout(layout);
    view->setItemWidget(this, widget);
    setSizeHint(widget->sizeHint());
}
