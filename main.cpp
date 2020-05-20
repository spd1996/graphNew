#include "mynew.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myNew w;
    w.show();

    return a.exec();
}
