#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast();
    double cost() const;
};

#endif // DARKROAST_H
