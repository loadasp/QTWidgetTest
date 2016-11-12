#ifndef IMTOOLBOX_H
#define IMTOOLBOX_H
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include "imtoolitem.h"
namespace UIControls {
class IMToolBox;
}
class IMToolBox:public QWidget
{
    Q_OBJECT
public:
   explicit IMToolBox(QWidget *parent = 0);
     ~IMToolBox();
     void addItem(IMToolItem *item);
private:
     QVBoxLayout *layout;
};
#endif // IMTOOLBOX_H
