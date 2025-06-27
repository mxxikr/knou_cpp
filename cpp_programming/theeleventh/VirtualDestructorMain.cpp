#include <iostream>
using namespace std;

// 가상 소멸자가 없는 경우
class BaseClassNoVirtual {
    int* ptB;
public:
    BaseClassNoVirtual(int n) {
        ptB = new int[n];
        cout << "BaseClassNoVirtual 생성" << endl;
    }
    ~BaseClassNoVirtual() {
        delete[] ptB;
        cout << "BaseClassNoVirtual 소멸" << endl;
    }
};

class DrvClassNoVirtual : public BaseClassNoVirtual {
    int* ptD;
public:
    DrvClassNoVirtual(int n1, int n2) : BaseClassNoVirtual(n1) {
        ptD = new int[n2];
        cout << "DrvClassNoVirtual 생성" << endl;
    }
    ~DrvClassNoVirtual() {
        delete[] ptD;
        cout << "DrvClassNoVirtual 소멸" << endl;
    }
};

// 가상 소멸자가 있는 경우
class BaseClass {
    int* ptB;
public:
    BaseClass(int n) {
        ptB = new int[n];
        cout << "BaseClass 생성" << endl;
    }
    virtual ~BaseClass() { // 가상 소멸자 선언
        delete[] ptB;
        cout << "BaseClass 소멸" << endl;
    }
};

class DrvClass : public BaseClass {
    int* ptD;
public:
    DrvClass(int n1, int n2) : BaseClass(n1) {
        ptD = new int[n2];
        cout << "DrvClass 생성" << endl;
    }
    ~DrvClass() {
        delete[] ptD;
        cout << "DrvClass 소멸" << endl;
    }
};

int main5()
{
    cout << "==== 가상 소멸자 없는 경우 ====" << endl;
    BaseClassNoVirtual* pB1 = new BaseClassNoVirtual(3);
    BaseClassNoVirtual* pB2 = new DrvClassNoVirtual(4, 5);

    delete pB1; // BaseClassNoVirtual 소멸자만 호출됨
    delete pB2; // BaseClassNoVirtual 소멸자만 호출됨 (메모리 누수 발생)

    cout << endl;

    cout << "==== 가상 소멸자 있는 경우 ====" << endl;
    BaseClass* pV1 = new BaseClass(3);
    BaseClass* pV2 = new DrvClass(4, 5);

    delete pV1; // BaseClass 소멸자만 호출됨
    delete pV2; // DrvClass 소멸자 호출 후 BaseClass 소멸자 호출

    return 0;
}