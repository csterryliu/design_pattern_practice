#ifndef _HAL_TV_PRODUCT_INCLUDED_
#define _HAL_TV_PRODUCT_INCLUDED_
#include "./tv_product.h"
using namespace std;

class HalTVProduct: public TVProduct {
    public:
        HalTVProduct();
        ~HalTVProduct();
        void turnOn();
};
#endif