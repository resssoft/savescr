#ifndef IMAGELISTWIDGETITEM_H
#define IMAGELISTWIDGETITEM_H

#include <QListWidgetItem>
#include <QGridLayout>
#include <QLabel>
#include <QPalette>
#include <QPushButton>

class ImageListWidgetItem : public QListWidgetItem
{
public:
    ImageListWidgetItem(const QString text, QListWidget* view, QPixmap imagepixmap);
};

#endif // IMAGELISTWIDGETITEM_H
