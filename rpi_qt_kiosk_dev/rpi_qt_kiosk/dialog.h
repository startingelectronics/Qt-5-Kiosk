#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsPixmapItem>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QString img_file, QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_btn_back_clicked();

private:
    Ui::Dialog *ui;

    // needed for displaying image in QGraphicsView of window
    QGraphicsScene* scene;
    QGraphicsPixmapItem* item;
};

#endif // DIALOG_H
