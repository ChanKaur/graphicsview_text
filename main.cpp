#include "mainwindow.h"
#include <QApplication>
#include "mygraphicsview.h"

int main( int argc, char **argv )
{
    QApplication app(argc, argv);
    MyMainWindow m;
    m.show();
    return app.exec();
}
