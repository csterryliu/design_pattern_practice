#include <iostream>
#include "./hal_factory.h"
#include "./hal_tv_product.h"
#include "./hal_fridge_product.h"
#include "./zoro_factory.h"
#include "./zoro_tv_product.h"
#include "./zoro_fridge_product.h"
using namespace std;

int main() {
    // From HAL company
    ApplicanceFactory* halFactory = new HalFactory();
    TVProduct* halTV = halFactory->makeTV();
    halTV->turnOn();
    FridgeProduct* halFridge = halFactory->makeFridge();
    halFridge->openDoor();
    delete halFactory;
    delete halTV;
    delete halFridge;
    cout << "----------------------------------------" << endl;
    // From Zoro company
    ApplicanceFactory* zoroFactory = new ZoroFactory();
    TVProduct* zoroTV = zoroFactory->makeTV();
    zoroTV->turnOn();
    FridgeProduct* zoroFridge = zoroFactory->makeFridge();
    zoroFridge->openDoor();
    delete zoroFactory;
    delete zoroTV;
    delete zoroFridge;

    return 0;
}