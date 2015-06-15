#ifndef WHIP_H
#define WHIP_H

#include "condimentdecorator.h"

class Whip : public CondimentDecorator
{
public:
    Whip(const Beverage* bev);
    std::string get_description() const;
    double cost() const;
};

#endif // WHIP_H
