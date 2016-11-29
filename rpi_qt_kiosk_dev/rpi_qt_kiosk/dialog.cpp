#include "dialog.h"
#include "ui_dialog.h"

#include <QDesktopWidget>

Dialog::Dialog(QString img_file, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // hide the window title bar, but let the window be closed using Alt + F4
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowCloseButtonHint);
    // shop window to middle of screen
    /*this->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, this->size(),
                                                                qApp->desktop()->availableGeometry()));*/

    // display the image in the window QGraphicsView box
    ui->graphicsView->setStyleSheet("background-color: transparent;");
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    item = new QGraphicsPixmapItem(QPixmap(img_file));
    scene->addItem(item);
    // move cursor off screen so that it does not land on top of a button and highlight it
    QCursor::setPos(800, 480);
    //this->show();
    this->showFullScreen();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_back_clicked()
{
    // move cursor off screen so that it does not land on top of a button and highlight it
    QCursor::setPos(800, 480);
    this->close();
}
