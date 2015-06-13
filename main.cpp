#include <iostream>
#include "darkroast.h"
#include "decaf.h"
#include "houseblend.h"
#include "espresso.h"
#include "mocha.h"

using namespace std;

int main()
{
    Beverage *decaf = new Decaf();
    cout << decaf->get_description() << ": " << decaf->cost() << endl;

    decaf = new Mocha(*decaf);
    cout << decaf->get_description() << ": " << decaf->cost() << endl;

    return 0;
}

