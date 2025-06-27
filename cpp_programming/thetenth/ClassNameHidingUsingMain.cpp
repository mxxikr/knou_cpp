#include <iostream>
using namespace std;

class A {
public:
    void f2(int x) { cout << "A::f2() --> " << x << endl; }
};

class B : public A {
public:
    using A::f2; // A Ŭ������ f2 ��� �Լ��� B������ ���̰� ��
    void f2(double x) { cout << "B::f2() --> " << x << endl; }
};

int main() {
    B objB;
    objB.f2(10.0); // B::f2() --> 10
    objB.f2(20);   // A::f2() --> 20 (�Ѵ� ��� ����)
    return 0;
}