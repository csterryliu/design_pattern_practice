#include <iostream>
#include "./zoro_factory.h"
#include "./zoro_tv_product.h"
#include "./zoro_fridge_product.h"

ZoroFactory::ZoroFactory() {
    cout << "ZoroFactory created\n";
}

ZoroFactory::~ZoroFactory() {
    cout << "ZoroFactory deleted\n";
}

TVProduct* ZoroFactory::makeTV() {
    return new ZoroTVProduct();
}

FridgeProduct* ZoroFactory::makeFridge() {
    return new ZoroFridgeProduct();
}