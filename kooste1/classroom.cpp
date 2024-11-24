#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent1=Student("Teppo Testi");
    objStudent2=Student("Liisa Joki");
    objStudent3=Student("Aino Virta");
}

void ClassRoom::printData()
{
    objStudent1.getData();
    objStudent2.getData();
    objStudent3.getData();
}
