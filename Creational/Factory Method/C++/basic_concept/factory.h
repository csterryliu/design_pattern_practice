#ifndef _FACTORY_H_INCLUDED_
#define _FACTORY_H_INCLUDED_
#include <iostream>
#include "product.h"
using namespace std;

class Factory {
    public:
        Factory();
        virtual ~Factory();
        virtual Product* factoryMethod();
};
#endif