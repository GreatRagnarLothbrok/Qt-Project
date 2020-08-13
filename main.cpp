#include "View.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto view = new View;
    view->show();
    return a.exec();
}
