#include "./simple_factory.h"

int main() {
    Door* door = DoorFactory::makeWoodenDoor(10, 10);
    cout << door->getHeight() << " " << door->getWidth() << endl;
    delete door;
    return 0;
}