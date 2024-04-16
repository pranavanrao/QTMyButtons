#include "mywidget.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;

    QPushButton b1("Button");
    b1.show();

    w.show();
    return a.exec();
}
