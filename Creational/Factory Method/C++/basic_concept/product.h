// header gaurd
#ifndef _PRODUCT_H_INCLUDED_
#define _PRODUCT_H_INCLUDED_
#include <iostream>
using namespace std;
class Product {
    public:
        Product();
        // if we don't add "virtual" to the destructor,
        // when we delete the pointer to its child class,
        // the desturctor of the child class won't be triggered
        virtual ~Product();
        virtual void use();
};
#endif