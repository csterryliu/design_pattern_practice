#ifndef _ZORO_FACTORY_INCLUDED_
#define _ZORO_FACTORY_INCLUDED_
#include "./appliance_factory.h"
using namespace std;

class ZoroFactory: public ApplicanceFactory {
    public:
        ZoroFactory();
        ~ZoroFactory();
        TVProduct* makeTV();
        FridgeProduct* makeFridge();
};
#endif