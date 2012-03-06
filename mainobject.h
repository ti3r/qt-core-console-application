#ifndef MAINOBJECT_H
#define MAINOBJECT_H

#include <QObject>

class MainObject : public QObject
{
    Q_OBJECT
public:
    explicit MainObject(QObject *parent = 0);
    
signals:
    
public slots:
    void onAppStarted();
    void closeApplication();
};

#endif // MAINOBJECT_H
