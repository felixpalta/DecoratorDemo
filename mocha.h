#ifndef MOCHA_H
#define MOCHA_H

#include "condimentdecorator.h"

class Mocha : public CondimentDecorator
{
public:
    Mocha(const Beverage* bev);
    std::string get_description() const;
    double cost() const;
};

#endif // MOCHA_H
