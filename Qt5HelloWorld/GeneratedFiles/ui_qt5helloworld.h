/********************************************************************************
** Form generated from reading UI file 'qt5helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT5HELLOWORLD_H
#define UI_QT5HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt5HelloWorldClass
{
public:
    QAction *actionE_xit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt5HelloWorldClass)
    {
        if (Qt5HelloWorldClass->objectName().isEmpty())
            Qt5HelloWorldClass->setObjectName(QStringLiteral("Qt5HelloWorldClass"));
        Qt5HelloWorldClass->resize(600, 400);
        actionE_xit = new QAction(Qt5HelloWorldClass);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        actionAbout = new QAction(Qt5HelloWorldClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(Qt5HelloWorldClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 93, 28));
        Qt5HelloWorldClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt5HelloWorldClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        Qt5HelloWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt5HelloWorldClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qt5HelloWorldClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qt5HelloWorldClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qt5HelloWorldClass->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu_File->addAction(actionE_xit);
        menuHelp->addAction(actionAbout);

        retranslateUi(Qt5HelloWorldClass);
        QObject::connect(actionE_xit, SIGNAL(triggered()), Qt5HelloWorldClass, SLOT(close()));

        QMetaObject::connectSlotsByName(Qt5HelloWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt5HelloWorldClass)
    {
        Qt5HelloWorldClass->setWindowTitle(QApplication::translate("Qt5HelloWorldClass", "Qt5HelloWorld", 0));
        actionE_xit->setText(QApplication::translate("Qt5HelloWorldClass", "E&xit", 0));
        actionAbout->setText(QApplication::translate("Qt5HelloWorldClass", "About", 0));
        pushButton->setText(QApplication::translate("Qt5HelloWorldClass", "PushButton", 0));
        menu_File->setTitle(QApplication::translate("Qt5HelloWorldClass", "&File", 0));
        menuHelp->setTitle(QApplication::translate("Qt5HelloWorldClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class Qt5HelloWorldClass: public Ui_Qt5HelloWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT5HELLOWORLD_H
