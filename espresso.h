#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "beverage.h"

class Espresso : public Beverage
{
public:
    Espresso();
    double cost() const;
};

#endif // ESPRESSO_H
