#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beverage.h"

class CondimentDecorator : public Beverage
{
public:

    std::string get_description() const = 0;
};

#endif // CONDIMENTDECORATOR_H
