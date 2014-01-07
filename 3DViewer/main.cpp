#include "my3dviewer.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	My3DViewer w;
	w.show();
	return a.exec();
}
