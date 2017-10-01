#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_countBtn_clicked();

    void on_radiusLineEdit_textChanged(const QString &arg1);

private slots:
    void showArea();

private:
    Ui::Dialog *ui;

private:
    QLabel *label1,*label2;
    QLineEdit *lineEdit;
    QPushButton *button;
};

#endif // DIALOG_H
