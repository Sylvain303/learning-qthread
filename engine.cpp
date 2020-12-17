#include "engine.h"
#include <QDebug>
#include <QTimer>

MyEngine::MyEngine(QString s) : name(s)
{
}

// We overrides the QThread's run() method here
// run() will be called when a thread starts
// the code will be shared by all threads

void MyEngine::run()
{
    qDebug() << name << "engine starting" << endl;
    
    QTimer *t = new QTimer();
    connect(t, &QTimer::timeout, this, [this] {on_timer_tic();});

    t->setInterval(500);
    t->start();
}

void MyEngine::on_timer_tic()
{
    qDebug() << name << "engine running" << endl;
}

