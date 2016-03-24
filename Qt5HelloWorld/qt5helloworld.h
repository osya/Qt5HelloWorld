#ifndef QT5HELLOWORLD_H
#define QT5HELLOWORLD_H

#include <QtWidgets/QMainWindow>
#include "ui_qt5helloworld.h"

class Qt5HelloWorld : public QMainWindow
{
	Q_OBJECT

public:
	Qt5HelloWorld(QWidget *parent = 0);
	~Qt5HelloWorld();

private:
	Ui::Qt5HelloWorldClass ui;
};

#endif // QT5HELLOWORLD_H
