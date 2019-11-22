#include <iostream>
#include "./hal_factory.h"
#include "./hal_tv_product.h"
#include "./hal_fridge_product.h"

HalFactory::HalFactory() {
    cout << "HalFactory created\n";
}

HalFactory::~HalFactory() {
    cout << "HalFactory deleted\n";
}

TVProduct* HalFactory::makeTV() {
    return new HalTVProduct();
}

FridgeProduct* HalFactory::makeFridge() {
    return new HalFridgeProduct();
}