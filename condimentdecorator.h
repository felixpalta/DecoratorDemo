#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beverage.h"

class CondimentDecorator : public Beverage
{
protected:
    const Beverage& _beverage;

    CondimentDecorator(const Beverage& bev)
        : _beverage(bev)
    {
    }

public:
    std::string get_description() const = 0;
};

#endif // CONDIMENTDECORATOR_H
