#ifndef _ZORO_TV_PRODUCT_INCLUDED_
#define _ZORO_TV_PRODUCT_INCLUDED_
#include "./tv_product.h"
using namespace std;

class ZoroTVProduct: public TVProduct {
    public:
        ZoroTVProduct();
        ~ZoroTVProduct();
        void turnOn();
};
#endif