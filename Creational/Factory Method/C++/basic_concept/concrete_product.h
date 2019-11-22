#ifndef _CONCRETE_PRODUCT_H_INCLUDED_
#define _CONCRETE_PRODUCT_H_INCLUDED_
#include <iostream>
#include "product.h"
using namespace std;
class ConcreteProduct: public Product {
    public:
        ConcreteProduct();
        ~ConcreteProduct();
        void use();
};
#endif