#include "italianchef.h"

ItalianChef::ItalianChef()
{

}

string ItalianChef::getName() const
{
    return name;
}

ItalianChef::~ItalianChef()
{
        cout<<"Italian Chef "<<name<<" destruktori"<<endl;
}

ItalianChef::ItalianChef(string n) : Chef(n)
{
    cout<<"Italian Chef "<<name<<" konstruktori"<<endl;

}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}
