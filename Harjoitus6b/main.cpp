#include "exampleclass.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass*exampleclass=new ExampleClass;
    exampleclass->startToWait();
    delete exampleclass;
    exampleclass=nullptr;
    return a.exec();
}
