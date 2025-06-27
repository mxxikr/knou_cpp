#include <iostream>
using namespace std;

class A {
public:
    void f(int x) { cout << "A::f() --> " << x << endl; }
};

class B : public A {
public:
    void f(double x) { cout << "B::f() --> " << x << endl; }
};

int main7() {
    B objB;
    objB.f(10.0); // B::f() --> 10
    objB.f(20);   // B::f() --> 20 (A::f()는 숨겨지고 double 버전으로 int가 승격됨)
    return 0;
}