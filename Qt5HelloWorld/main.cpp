#include "qt5helloworld.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt5HelloWorld w;
	w.show();
	return a.exec();
}
