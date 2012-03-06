#include "mainobject.h"
#include <stdio.h>
#include <QTimer>
#include <QCoreApplication>

MainObject::MainObject(QObject *parent) :
    QObject(parent)
{
}

void MainObject::onAppStarted()
{
    int x = 2000;
    printf("Application Started!!!!\n");
    printf("Scheduling close for 2 secs!!!!\n");
    QTimer::singleShot(x, this, SLOT(closeApplication()));
}

void MainObject::closeApplication()
{
    printf("Closing application!!!!\n");
    QCoreApplication::exit(0);
}
