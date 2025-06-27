#include <iostream>
using namespace std;

class A {
public:
    virtual void f() {
        cout << "A::f" << endl;
    }
};

class B : public A {
public:
    // override ����ؼ� ������ ���
    void f() override {
        cout << "B::f (override)" << endl;
    }
    // ���ο� ���� �Լ�
    virtual void g() {
        cout << "B::g" << endl;
    }
};

class BFinal : public A {
public:
    // final ����� �� �̻� ������ �Ұ�
    void f() override final {
        cout << "BFinal::f (override, final)" << endl;
    }
};


//class C : public BFinal {
//public:
//    void f() override { // BFinal���� final�� ������ ���Ƶ�
//        cout << "C::f" << endl;
//    }
//};


int main() {
    A a; // A Ŭ���� ��ü ����
    B b; // B Ŭ���� ��ü ����
    A* p = &b; // �θ� Ÿ��(A) ������ p�� �ڽ� ��ü(B Ÿ�� b)�� �ּҸ� ����
    p->f(); // B::f (override)�� ��µ�

    BFinal bf;
    A* p2 = &bf; // �θ� Ÿ��(A) ������ p2�� BFinal ��ü bf�� �ּҸ� ����
    p2->f(); // BFinal::f (override, final) ���

    return 0;
}