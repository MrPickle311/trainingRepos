#include "Laboratorium.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Laboratorium w;
	w.show();
	return a.exec();
}
