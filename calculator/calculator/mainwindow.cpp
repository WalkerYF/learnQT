#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->lineEdit->text();
    int valueInt = valueStr.toInt(&ok);
    double result = valueInt+1;
    ui->calculateResult->setText(tempStr.setNum(result));
}
