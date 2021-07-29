#include "QtClass.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtClass w;
    w.show();
    return a.exec();
}
