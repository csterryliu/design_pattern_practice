#include <iostream>
#include "singleton.h"

using namespace std;

// check: the initialization of a static member of C++ classes
Singleton* Singleton::instance = NULL;

Singleton::Singleton() { }
Singleton::~Singleton() { delete instance; }

void Singleton::hello() {
    printf("Hello World\n");
}

Singleton* Singleton::getInstance() {
    if (instance == NULL) {
        printf("Creating the instance....\n");
        instance = new Singleton();
    }
    return instance;
}

int main() {
    Singleton* inst = Singleton::getInstance();
    inst->hello();
    Singleton* inst2 = Singleton::getInstance();
    inst2->hello();
    return 0;
}


