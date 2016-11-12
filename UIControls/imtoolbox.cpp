#include "imtoolbox.h"
IMToolBox::IMToolBox(QWidget *parent ) : QWidget(parent), layout(new QVBoxLayout)
    {
        setLayout(layout);
        layout->setContentsMargins(0,0,0,0);
        layout->setSpacing(0);
    }
IMToolBox::~IMToolBox()
{}
  void IMToolBox::addItem(IMToolItem *item)
    {
        layout->addWidget(item);
    }

