// #include "myhttp.h"

// #include <QCoreApplication>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     myhttp *objMyhttp=new myhttp;
//     objMyhttp->getMyhttp(2);
//     delete objMyhttp;
//     objMyhttp=nullptr;
//     return a.exec();
// }
#include "myhttp.h"

#include <QCoreApplication>
#include<iostream>
int main(int argc, char *argv[])
{
    // QCoreApplication a(argc, argv);
    // MyHttp obj;
    // int x;
    // std::cout<<"Anna ID\n";
    // std::cin >> x;
    // obj.getUsers(x);
    // return a.exec();
    //     QCoreApplication a(argc, argv);
    QCoreApplication a(argc, argv);
    MyHttp *objMyhttp=new MyHttp;
        objMyhttp->getUsers(2);
        delete objMyhttp;
        objMyhttp=nullptr;
        return a.exec();
}
