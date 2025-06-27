#ifndef DRVD1_H
#define DRVD1_H

#include "BaseC.h"
#include <iostream>
using namespace std;

class Drvd1 : protected BaseC {
public:
    int sum() const {
        return geta() + b + c;
    }
    void printbc() const {
        cout << "b << " << b << ", c " << c;
    }
};

//class Drvd1 : public BaseC {
//public:
//    int sum() const {
//        return geta() + b + c;
//    }
//    void printbc() const {
//        cout << "b << " << b << ", c " << c;
//    }
//};

#endif // DRVD1_H ¤²¤¾¼ö