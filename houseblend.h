#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    double cost() const;
};

#endif // HOUSEBLEND_H
