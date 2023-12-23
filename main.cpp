#include "vehicle_info.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vehicle_info w;
    w.show();
    return a.exec();
}
