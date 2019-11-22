#ifndef _FRIDGE_PRODUCT_INCLUDED_
#define _FRIDGE_PRODUCT_INCLUDED_
using namespace std;

class FridgeProduct {
    public:
        FridgeProduct() { }
        virtual ~FridgeProduct() { }
        virtual void openDoor() = 0;
};
#endif