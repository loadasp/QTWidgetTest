#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(400,238);
    setWindowOpacity(1);
    setWindowFlags(Qt::FramelessWindowHint);
  //  setAttribute(Qt::WA_TranslucentBackground);
   // QPalette bgpal = palette();
   // bgpal.setColor(QPalette::Background, QColor(0x00,0xff,0x00,0x00));

   // bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));
    //bgpal.setColor (QPalette::Background, Qt::transparent);
   // bgpal.setColor (QPalette::Foreground, QColor (255,255,255,255));
   // setPalette (bgpal);


    QIcon icon(":/Images/tray.ico");
        systemTray = new QSystemTrayIcon(this);
         systemTray->setIcon(icon);
        systemTray->setToolTip("程序继续运行");
       minAction = new QAction("最大化", this);
         connect(minAction, SIGNAL(triggered()), this, SLOT(hide()));
          maxAction = new QAction("最小化", this);
         connect(maxAction, SIGNAL(triggered()), this, SLOT(showMaximized()));
      restoreAction = new QAction("还原", this);
      connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));
      quitAction = new QAction("退出", this);
       connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
      pContextMenu = new QMenu(this);
      pContextMenu->addAction(minAction);
     pContextMenu->addAction(maxAction);
       pContextMenu->addAction(restoreAction);
       pContextMenu->addSeparator();
      pContextMenu->addAction(quitAction);
       systemTray->setContextMenu(pContextMenu);
       systemTray->show();
}

void MainWindow::closeEvent(QCloseEvent *event)
{


    if(systemTray->isVisible())

    {

        hide();

        systemTray->showMessage("提示", "程序继续运行");

        event->ignore();

    }
}
MainWindow::~MainWindow()
{

    delete minAction;
    delete maxAction;
    delete restoreAction;
    delete quitAction;
    delete systemTray;
     delete pContextMenu;
    delete ui;

}

void MainWindow::on_btnCancel_clicked()
{
    this->close();
}

void MainWindow::on_btnOK_clicked()
{

}
