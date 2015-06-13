#include "mocha.h"

Mocha::Mocha(const Beverage &bev)
    : _beverage(bev)
{
}

std::string Mocha::get_description() const
{
    return _beverage.get_description() + ", Mocha";
}

double Mocha::cost() const
{
    return _beverage.cost() + .20;
}
