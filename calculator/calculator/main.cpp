#include "mainwindow.h"
#include <QApplication>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();
//}

#include<QDebug>
#include<QVariant>
int main(int argc, char *argv[]){
    qDebug() << "testestest" << endl << endl;
    QVariant test("sdf");
    qDebug() << test.toString() << endl;
    return 0;
}
