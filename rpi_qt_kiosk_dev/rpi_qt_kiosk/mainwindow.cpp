#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // display the image in the main window QGraphicsView box
    ui->graphicsView->setStyleSheet("background-color: transparent;");
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    item = new QGraphicsPixmapItem(QPixmap("res/mall.png"));
    scene->addItem(item);

    shop_win = NULL;
}

MainWindow::~MainWindow()
{
    if (shop_win != NULL) {
        delete shop_win;
    }

    delete item;
    delete scene;

    delete ui;
}

void MainWindow::on_btn_shop1_clicked()
{
    if (shop_win != NULL) {
        delete shop_win;
    }
    shop_win = new Dialog("res/shop1.png");
}

void MainWindow::on_btn_shop2_clicked()
{
    if (shop_win != NULL) {
        delete shop_win;
    }
    shop_win = new Dialog("res/shop2.png");
}

void MainWindow::on_btn_shop3_clicked()
{
    if (shop_win != NULL) {
        delete shop_win;
    }
    shop_win = new Dialog("res/shop3.png");
}

void MainWindow::on_btn_shop4_clicked()
{
    if (shop_win != NULL) {
        delete shop_win;
    }
    shop_win = new Dialog("res/shop4.png");
}
