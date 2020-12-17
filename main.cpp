#include <QCoreApplication>
// #include "mythread.h"
#include "engine.h"

#include "mythread.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread thread1("A"), thread2("B");
    MyEngine motor("motor");
    motor.start();

    thread1.start();
    thread2.start();


    return a.exec();
}
