#include "concrete_product.h"

ConcreteProduct::ConcreteProduct() {
    cout << "ConcreteProduct is created\n";
}

ConcreteProduct::~ConcreteProduct() {
    cout << "ConcreteProduct is deleted\n";
}

void ConcreteProduct::use() {
    cout << "Using ConcreteProduct...\n";
}