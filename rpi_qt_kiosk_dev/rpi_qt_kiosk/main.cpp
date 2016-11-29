#include "mainwindow.h"
#include <QApplication>

#include <QStyle>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // hide the window title bar, but let the window be closed using Alt + F4
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowCloseButtonHint);
    // window to middle of screen
    //w.setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignLeft | Qt::AlignTop, w.size(),
    //                                                            qApp->desktop()->availableGeometry()));
    //w.show();
    w.showFullScreen();

    return a.exec();
}
