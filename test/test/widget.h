#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

namespace Ui {
class myWindows;
}

class myWindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit myWindows(QWidget *parent = 0);
    ~myWindows();

private:
    Ui::myWindows *ui;
};

#endif // WIDGET_H
