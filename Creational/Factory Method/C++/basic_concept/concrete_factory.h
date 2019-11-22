#ifndef _CONCRETE_FACOTRY_H_INCLUDED_
#define _CONCRETE_FACOTRY_H_INCLUDED_
#include "./factory.h"
#include "./product.h"

class ConcreteFactory: public Factory {
    public:
        ConcreteFactory();
        ~ConcreteFactory();
        Product* factoryMethod();
};
#endif