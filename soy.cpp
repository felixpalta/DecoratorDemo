#include "soy.h"

Soy::Soy(const Beverage &bev)
    : _beverage(bev)
{

}

std::string Soy::get_description() const
{
    return _beverage.get_description() + ", Soy";
}
double Soy::cost() const
{
    return _beverage.cost() + .15;
}
