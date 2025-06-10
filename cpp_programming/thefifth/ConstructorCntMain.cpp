#include <iostream>
#include "ConstructorCounter.h"
using namespace std;

void f(ConstructorCounter& c) // Counter 객체를 매개변수로 받는 함수
{
    c.count();
    cout << c.getValue();
}

void g(const ConstructorCounter& c) // const 객체를 매개변수로 받는 함수
{
    cout << c.getValue();
}

int main3()
{
    ConstructorCounter cnt;
    //cnt.reset(); // reset() 함수는 생성자에서 이미 호출되므로 필요 없음
    cout << "계수기의 현재 값 : "
        << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "계수기의 현재 값 : "
        << cnt.getValue() << endl;
    return 0;
}