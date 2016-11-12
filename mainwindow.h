#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
#include<QSystemTrayIcon>
#include<QCloseEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnCancel_clicked();

    void on_btnOK_clicked();


private:
    Ui::MainWindow *ui;
    QMenu *pContextMenu;
    QSystemTrayIcon *systemTray;
    QAction *minAction;
     QAction *maxAction;
      QAction *restoreAction;
       QAction *quitAction;
     void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
