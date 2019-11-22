#include "./factory.h"

Factory::Factory() {
    cout << "Factory is created" << endl;
}

Factory::~Factory() {
    cout << "Factory is deleted" << endl;
}

Product* Factory::factoryMethod() {
    return NULL;
}