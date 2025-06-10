#include <iostream>
#include "NoConstructorCounter.h"
using namespace std;

void f(NoConstructorCounter& c) // Counter 객체를 매개변수로 받는 함수
{
    c.count();
    cout << c.getValue();
}

void g(const NoConstructorCounter& c) // const 객체를 매개변수로 받는 함수
{
    cout << c.getValue();
}

int main2()
{
    NoConstructorCounter cnt;
    cnt.reset();
    cout << "계수기의 현재 값 : "
        << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "계수기의 현재 값 : "
        << cnt.getValue() << endl;
    return 0;
}