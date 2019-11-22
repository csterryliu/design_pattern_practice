#include "./concrete_product.h"
#include "./concrete_factory.h"
using namespace std;
int main() {
    // only use the factory to make product
    // users don't need to know how to create the product
    // just delegate the task to the factory
    Factory* cf = new ConcreteFactory();
    Product* cp = cf->factoryMethod();
    cp->use();
    delete cf;
    delete cp;
    return 0;
}