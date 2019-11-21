#include <iostream>
using namespace std;
class Door {
    protected:
        float height_;
        float width_;
    public:
        virtual float getHeight() = 0;
        virtual float getWidth() = 0;
        Door(float height, float width): height_(height), width_(width) {
            cout << "Door created\n";
        }
        virtual ~Door() { cout << "Door destroyed\n"; }
};

class WoodenDoor: public Door {
    public:
        WoodenDoor(float height, float width): Door(height, width) {
            // height_ = height;
            // width_ = width;
            cout << "WoodenDoor created\n";
        }
        ~WoodenDoor() { cout << "WoodenDoor destroyed\n"; }
        float getHeight() {
            return height_;
        }
        float getWidth() {
            return width_;
        }
};

class DoorFactory {  // it doens't implement or inherit Door!!
    public:
        DoorFactory() {}
        ~DoorFactory() {}
        static Door* makeWoodenDoor(float height, float width) {
            return new WoodenDoor(height, width);
        }
};