#include <QtCore/QCoreApplication>
#include "mainobject.h"
#include <stdio.h>
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MainObject myMain;
    QTimer::singleShot(500,&myMain,SLOT(onAppStarted()));
    return a.exec();

}
