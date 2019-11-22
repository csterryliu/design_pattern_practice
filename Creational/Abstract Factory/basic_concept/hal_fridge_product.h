#ifndef _HAL_FRIDGE_PRODUCT_INCLUDED_
#define _HAL_FRIDGE_PRODUCT_INCLUDED_
#include "./fridge_product.h"
using namespace std;

class HalFridgeProduct: public FridgeProduct {
    public:
        HalFridgeProduct();
        ~HalFridgeProduct();
        void openDoor();
};
#endif