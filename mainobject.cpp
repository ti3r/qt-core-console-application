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
    int x = 15000;
    printf("Application Started!!!!\n");
    printf("Connecting close Signals and slots\n");
    connect(this,SIGNAL(exitApplication(int)),SLOT(onCloseApplication(int)));
    printf("Scheduling exitApplication signal for %i millis\n",x);
    QTimer::singleShot(x,this,SLOT(scheduleAutoClose()));
}

void MainObject::onCloseApplication(int retCode)
{
    printf("Application closed with return code %i\n",retCode);
    QCoreApplication::exit(retCode);
}

void MainObject::scheduleAutoClose()
{
    emit(exitApplication(0));
}
