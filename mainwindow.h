#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fclientupdater.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setupWindow();

private slots:
    void on_updateButton_clicked();

    void on_restoreButton_clicked();

private:
    Ui::MainWindow *ui;
    FClientUpdater *updater;
};

#endif // MAINWINDOW_H
