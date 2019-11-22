#include <iostream>
#include "./zoro_fridge_product.h"

ZoroFridgeProduct::ZoroFridgeProduct() {
    cout << "ZoroFridgeProduct created\n";
}

ZoroFridgeProduct::~ZoroFridgeProduct() {
    cout << "ZoroFridgeProduct deleted\n";
}

void ZoroFridgeProduct::openDoor() {
    cout << "YOU ARE OPENING ZORO FRIDGE!!\n";
}