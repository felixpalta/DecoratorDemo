#ifndef DECAF_H
#define DECAF_H

#include "beverage.h"

class Decaf : public Beverage
{
public:
    Decaf();
    double cost() const;
};

#endif // DECAF_H
