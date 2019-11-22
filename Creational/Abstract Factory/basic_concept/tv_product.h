#ifndef _TV_PRODUCT_INCLUDED_
#define _TV_PRODUCT_INCLUDED_
using namespace std;

class TVProduct {
    public:
        // warning: you must provide implementation of constructors
        // and destructors! Even if you are writing pure abstract class!
        TVProduct() { }
        virtual ~TVProduct() { }
        virtual void turnOn() = 0;
};
#endif