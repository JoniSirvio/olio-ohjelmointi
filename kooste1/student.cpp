#include "student.h"

Student::Student() {}

Student::Student(string n)
{
    this ->name=n;
}

void Student::getData()
{
    cout<<"Opiskelija: "<<this->name<<endl;
}
