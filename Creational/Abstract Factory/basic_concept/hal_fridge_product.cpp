#include <iostream>
#include "./hal_fridge_product.h"

HalFridgeProduct::HalFridgeProduct() {
    cout << "HalFridgeProduct created\n";
}

HalFridgeProduct::~HalFridgeProduct() {
    cout << "HalFridgeProduct deleted\n";
}

void HalFridgeProduct::openDoor() {
    cout << "YOU ARE OPENING HAL FRIDGE!!\n";
}