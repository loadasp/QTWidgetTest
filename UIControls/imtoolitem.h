#ifndef IMTOOLITEM_H
#define IMTOOLITEM_H

#include <QWidget>
#include <QVBoxLayout>
namespace UIControls {
class IMToolItem;
}
class IMToolItem : public QWidget
{
    Q_OBJECT
public:
    explicit IMToolItem(const QString title,QWidget *parent = 0);
~IMToolItem();
signals:

public slots:
private:
     QVBoxLayout *layout;
};

#endif // IMTOOLITEM_H
