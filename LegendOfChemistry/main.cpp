#include "LegendOfChemistry.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LegendOfChemistry w;
    w.show();
    return a.exec();
}
