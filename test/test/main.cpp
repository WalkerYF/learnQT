#include "widget.h"
#include <QApplication>
#include <QPushButton>
#include <qlineedit.h>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QFrame>
#include <QStackedWidget>
#include <QSplitter>
#include <QListWidget>
#include "test.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWindows test;
    test.show();
    return a.exec();
}
