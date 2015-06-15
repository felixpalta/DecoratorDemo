#ifndef BEVERAGEFACTORY_H
#define BEVERAGEFACTORY_H

#include "beverage.h"
#include <memory>
#include <string>

class BeverageFactory
{
public:
    typedef enum
    {
        DARK_ROAST,
        DECAF,
        HOUSE_BLEND,
        ESPRESSO,
    } BeverageType;

    typedef enum
    {
        MOCHA,
        WHIP,
        SOY,
    } CondimentType;

    BeverageFactory() = default;
    std::unique_ptr<Beverage> get_new_beverage(const BeverageType bev) const;

    void add_condiment(std::unique_ptr<Beverage>& bev, const CondimentType cond) const;
};

#endif // BEVERAGEFACTORY_H
