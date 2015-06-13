#include "whip.h"

Whip::Whip(const Beverage &bev)
    : _beverage(bev)
{

}

std::string Whip::get_description() const
{
    return _beverage.get_description() + ", Whip";
}
double Whip::cost() const
{
    return _beverage.cost() + .10;
}
