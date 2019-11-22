#include "./product.h"

Product::Product() {
    cout << "Product is created\n";
}

Product::~Product() {
    cout << "Product is destoyed\n";
}

void Product::use() {
    cout << "Base product is used\n";
}