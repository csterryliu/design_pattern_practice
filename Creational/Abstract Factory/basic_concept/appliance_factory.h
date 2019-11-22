#ifndef _APPLIANCE_FACTORY_INCLUDED_
#define _APPLIANCE_FACTORY_INCLUDED_
#include "./fridge_product.h"
#include "./tv_product.h"
using namespace std;

class ApplicanceFactory {
    public:
        ApplicanceFactory() { }
        virtual ~ApplicanceFactory() { }
        // define multiple factory methods here
        virtual TVProduct* makeTV() = 0;
        virtual FridgeProduct* makeFridge() = 0;
};
#endif