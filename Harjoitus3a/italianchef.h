#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    void makePasta();
    string getName() const;
    ~ItalianChef();
};

#endif // ITALIANCHEF_H
