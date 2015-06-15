#include <iostream>
#include "beveragefactory.h"

using namespace std;

void print_beverage(const Beverage& bev)
{
    cout << bev.get_description() << ": " << bev.cost() << endl;
}

int main()
{

    BeverageFactory bf;

    auto bev = bf.get_new_beverage(BeverageFactory::DECAF);

    if (bev)
        print_beverage(*bev);

    bf.add_condiment(bev, BeverageFactory::MOCHA);

    if (bev)
        print_beverage(*bev);

    bf.add_condiment(bev, BeverageFactory::SOY);

    if (bev)
        print_beverage(*bev);

    return 0;
}

