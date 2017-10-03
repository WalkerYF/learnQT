/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionfunction_1;
    QAction *actionfunction_2;
    QWidget *centralWidget;
    QLabel *inputLabel;
    QLineEdit *inputEdit;
    QPushButton *clickButton;
    QLabel *outLabel;
    QMenuBar *menuBar;
    QMenu *menu_1;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 162);
        actionfunction_1 = new QAction(MainWindow);
        actionfunction_1->setObjectName(QStringLiteral("actionfunction_1"));
        actionfunction_2 = new QAction(MainWindow);
        actionfunction_2->setObjectName(QStringLiteral("actionfunction_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        inputLabel = new QLabel(centralWidget);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setGeometry(QRect(70, 20, 121, 21));
        inputEdit = new QLineEdit(centralWidget);
        inputEdit->setObjectName(QStringLiteral("inputEdit"));
        inputEdit->setGeometry(QRect(190, 20, 113, 21));
        clickButton = new QPushButton(centralWidget);
        clickButton->setObjectName(QStringLiteral("clickButton"));
        clickButton->setGeometry(QRect(220, 70, 80, 20));
        outLabel = new QLabel(centralWidget);
        outLabel->setObjectName(QStringLiteral("outLabel"));
        outLabel->setGeometry(QRect(60, 70, 81, 21));
        outLabel->setFrameShape(QFrame::Panel);
        outLabel->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menu_1 = new QMenu(menuBar);
        menu_1->setObjectName(QStringLiteral("menu_1"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_1->menuAction());
        menu_1->addAction(actionfunction_1);
        menu_1->addAction(actionfunction_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionfunction_1->setText(QApplication::translate("MainWindow", "function 1", Q_NULLPTR));
        actionfunction_2->setText(QApplication::translate("MainWindow", "function 2", Q_NULLPTR));
        inputLabel->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245", Q_NULLPTR));
        clickButton->setText(QApplication::translate("MainWindow", "\347\202\271\345\207\273\357\274\201", Q_NULLPTR));
        outLabel->setText(QString());
        menu_1->setTitle(QApplication::translate("MainWindow", "\345\267\262\345\256\236\347\216\260\345\212\237\350\203\275", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
