#include "./decorator.h"

int main() {
    Car* yourCar = new ToyotaCar();
    cout << yourCar->getCarDescription() << endl;
    yourCar = new CarNavigation(yourCar);
    yourCar = new CarTSS(yourCar);
    cout << "here's your car: " << yourCar->getCarDescription() << "price: "
    << yourCar->getCost() << endl;
    delete yourCar;
    return 0;
}