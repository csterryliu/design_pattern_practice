#include <string>
#include <iostream>

using namespace std;

class Car {
    protected:
        string str_;
    public:
        Car() {
            str_ = "Unknown Car";
        }
    virtual string getCarDescription() {
        return str_;
    }
    virtual double getCost() = 0;
    virtual ~Car() {
        cout << "Car destroyed.\n";
    }
};

class CarDecorator: public Car {
    public:
        virtual string getCarDescription() = 0;
        virtual ~CarDecorator() {
            cout << "CarDecorator destroyed.\n";
        }
};

class ToyotaCar: public Car {
    public:
        ToyotaCar() {
            str_ = "ToyotaCar";
        }
        ~ToyotaCar() {
            cout << "ToyotaCar destroyed.\n";
        }
        double getCost() {
            return 600000.0;
        }
};

class CarNavigation: public CarDecorator {
    private:
        Car* car_;
    public:
        CarNavigation(Car* car) {
            car_ = car;
        }
        string getCarDescription() {
            return car_->getCarDescription() + " with navigation system. ";
        }
        double getCost() {
            return car_->getCost() + 20000.0;
        }
        ~CarNavigation() {
            cout << "CarNavi destroyed\n";
            delete car_;
        }
};

class CarTSS: public CarDecorator {
    private:
        Car* car_;
    public:
        CarTSS(Car* car): car_(car) { }
        string getCarDescription() {
            return car_->getCarDescription() + " with TSS. ";
        }
        double getCost() {
            return car_->getCost() + 20000.0;
        }
        ~CarTSS() {
            cout << "CarTSS destroyed\n";
            delete car_;
        }
};