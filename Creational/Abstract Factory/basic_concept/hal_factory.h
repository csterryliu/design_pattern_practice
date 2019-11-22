#ifndef _HAL_FACTORY_INCLUDED_
#define _HAL_FACTORY_INCLUDED_
#include "./appliance_factory.h"
using namespace std;

class HalFactory: public ApplicanceFactory {
    public:
        HalFactory();
        ~HalFactory();
        TVProduct* makeTV();
        FridgeProduct* makeFridge();
};
#endif