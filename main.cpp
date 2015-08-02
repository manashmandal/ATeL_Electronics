#include "electronicsmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ElectronicsMainWindow w;
    w.show();

    return a.exec();
}
