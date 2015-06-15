#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beverage.h"
#include <memory>

class CondimentDecorator : public Beverage
{
protected:
    std::unique_ptr<const Beverage> _beverage;

    CondimentDecorator(const Beverage* bev)
        : _beverage(bev)
    {
    }

public:
    std::string get_description() const = 0;
};

#endif // CONDIMENTDECORATOR_H
