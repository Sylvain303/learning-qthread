#include <QCoreApplication>
#include "mythread.h"
#include "engine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    // MyThread thread1("A"), thread2("B");
    MyEngine motor("motor");

    // thread1.start();
    // thread2.start();
    motor.start();


    return a.exec();
}
