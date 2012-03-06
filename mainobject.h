#ifndef MAINOBJECT_H
#define MAINOBJECT_H

#include <QObject>

class MainObject : public QObject
{
    Q_OBJECT
public:
    explicit MainObject(QObject *parent = 0);
    
signals:
    void exitApplication(int);
public slots:
    void onAppStarted();
    void onCloseApplication(int retCode);
    void scheduleAutoClose();
};

#endif // MAINOBJECT_H
