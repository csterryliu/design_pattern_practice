#include <iostream>
#include "zoro_tv_product.h"

ZoroTVProduct::ZoroTVProduct() {
    cout << "ZoroTVProduct created\n";
}

ZoroTVProduct::~ZoroTVProduct() {
    cout << "ZoroTVProduct deleted\n";
}

void ZoroTVProduct::turnOn() {
    cout << "YOU ARE USING ZORO TV!!\n";
}