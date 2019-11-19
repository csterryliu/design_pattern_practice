#include "./decorator.h"

int main() {
    Car* basicCar = new ToyotaCar();
    cout << basicCar->getCarDescription() << endl;
    Car* customCar1 = new CarNavigation(basicCar);
    cout << "here's your car: " << customCar1->getCarDescription() << "price: "
    << customCar1->getCost() << endl;
    delete customCar1;
    return 0;
}