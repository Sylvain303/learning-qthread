#ifndef MYENGINE_H
#define MYENGINE_H

#include <QThread>
#include <QString>

class MyEngine : public QThread
{
public:
    // constructor
    // set name using initializer
    explicit MyEngine(QString s);

    // overriding the QThread's run() method
    void run();

public slots:
    void on_timer_tic();

private:
    QString name;
};

#endif // MYENGINE_H
