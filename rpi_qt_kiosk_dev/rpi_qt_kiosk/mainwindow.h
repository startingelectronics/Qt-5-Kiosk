#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QGraphicsPixmapItem>
#include "dialog.h"

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
    void on_btn_shop1_clicked();

    void on_btn_shop2_clicked();

    void on_btn_shop3_clicked();

    void on_btn_shop4_clicked();

private:
    Ui::MainWindow *ui;

    // needed for displaying image in QGraphicsView of main window
    QGraphicsScene* scene;
    QGraphicsPixmapItem* item;

    // shop window for the four shops
    Dialog* shop_win;
};

#endif // MAINWINDOW_H
