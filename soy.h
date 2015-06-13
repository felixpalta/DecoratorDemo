#ifndef SOY_H
#define SOY_H

#include "condimentdecorator.h"

class Soy : public CondimentDecorator
{
public:
    Soy(const Beverage &bev);
    std::string get_description() const;
    double cost() const;
};

#endif // SOY_H
