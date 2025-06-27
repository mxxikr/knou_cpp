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
    // override 사용해서 재정의 명시
    void f() override {
        cout << "B::f (override)" << endl;
    }
    // 새로운 가상 함수
    virtual void g() {
        cout << "B::g" << endl;
    }
};

class BFinal : public A {
public:
    // final 사용해 더 이상 재정의 불가
    void f() override final {
        cout << "BFinal::f (override, final)" << endl;
    }
};


//class C : public BFinal {
//public:
//    void f() override { // BFinal에서 final로 재정의 막아둠
//        cout << "C::f" << endl;
//    }
//};


int main() {
    A a; // A 클래스 객체 생성
    B b; // B 클래스 객체 생성
    A* p = &b; // 부모 타입(A) 포인터 p에 자식 객체(B 타입 b)의 주소를 저장
    p->f(); // B::f (override)가 출력됨

    BFinal bf;
    A* p2 = &bf; // 부모 타입(A) 포인터 p2에 BFinal 객체 bf의 주소를 저장
    p2->f(); // BFinal::f (override, final) 출력

    return 0;
}