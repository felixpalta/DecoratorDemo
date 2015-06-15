#include "beveragefactory.h"
#include "decaf.h"
#include "darkroast.h"
#include "houseblend.h"
#include "espresso.h"
#include "mocha.h"
#include "whip.h"
#include "soy.h"
#include <iostream>

using namespace std;

std::unique_ptr<Beverage> BeverageFactory::get_new_beverage(const BeverageType bev) const
{
    unique_ptr<Beverage> retval(nullptr);

    try
    {
        switch (bev)
        {
        case DECAF:
            retval.reset(new Decaf());
            break;
        case DARK_ROAST:
            retval.reset(new DarkRoast());
            break;
        case ESPRESSO:
            retval.reset(new Espresso);
            break;
        case HOUSE_BLEND:
            retval.reset(new HouseBlend());
            break;
        default:
            break;
        }
    }
    catch (bad_alloc& exc)
    {
        cerr << exc.what() << endl;
    }

    return retval;
}

void BeverageFactory::add_condiment(std::unique_ptr<Beverage>& bev, const CondimentType cond) const
{
    if (bev)
    {
        Beverage *raw_bev_ptr;
        try
        {
            switch (cond)
            {
            case MOCHA:
                raw_bev_ptr = bev.release();
                bev.reset(new Mocha(raw_bev_ptr));
                break;
            case SOY:
                raw_bev_ptr = bev.release();
                bev.reset(new Soy(raw_bev_ptr));
                break;
            case WHIP:
                raw_bev_ptr = bev.release();
                bev.reset(new Whip(raw_bev_ptr));
                break;
            default:
                break;
            }
        }
        catch (bad_alloc& exc)
        {
            cerr << exc.what() << endl;
        }
    }
}
