#include <iostream>
using namespace std;

class A {
public:
    void f2(int x) { cout << "A::f2() --> " << x << endl; }
};

class B : public A {
public:
    using A::f2; // A 클래스의 f2 멤버 함수를 B에서도 보이게 함
    void f2(double x) { cout << "B::f2() --> " << x << endl; }
};

int main() {
    B objB;
    objB.f2(10.0); // B::f2() --> 10
    objB.f2(20);   // A::f2() --> 20 (둘다 사용 가능)
    return 0;
}