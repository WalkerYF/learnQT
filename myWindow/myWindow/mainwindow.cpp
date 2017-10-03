#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->inputEdit, SIGNAL(textChanged(QString)), this, SLOT(updateString(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clickButton_clicked()
{
    QString	inputStr = ui->inputEdit->text();
    QMessageBox::question(this, "question", inputStr + " finished", QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Ok);
}

void MainWindow::updateString(QString s){
    ui->outLabel->setText(s);
}
