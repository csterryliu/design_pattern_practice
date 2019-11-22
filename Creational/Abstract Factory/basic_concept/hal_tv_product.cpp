#include <iostream>
#include "hal_tv_product.h"

HalTVProduct::HalTVProduct() {
    cout << "HalTVProduct created\n";
}

HalTVProduct::~HalTVProduct() {
    cout << "HalTVProduct deleted\n";
}

void HalTVProduct::turnOn() {
    cout << "YOU ARE USING HAL TV!!\n";
}