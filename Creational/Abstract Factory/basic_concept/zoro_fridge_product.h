#ifndef _ZORO_FRIDGE_PRODUCT_INCLUDED_
#define _ZORO_FRIDGE_PRODUCT_INCLUDED_
#include "./fridge_product.h"
using namespace std;

class ZoroFridgeProduct: public FridgeProduct {
    public:
        ZoroFridgeProduct();
        ~ZoroFridgeProduct();
        void openDoor();
};
#endif