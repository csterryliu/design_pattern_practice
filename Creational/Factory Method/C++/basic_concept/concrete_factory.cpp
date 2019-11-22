#include "./concrete_factory.h"
#include "./concrete_product.h"

ConcreteFactory::ConcreteFactory() {
    cout << "ConcreteFactory is created" << endl;
}

ConcreteFactory::~ConcreteFactory() {
    cout << "ConcreteFactoy is deleted" << endl;
}

Product* ConcreteFactory::factoryMethod() {
    return new ConcreteProduct();
}