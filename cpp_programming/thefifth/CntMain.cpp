#include <iostream>
#include "Counter.h"
using namespace std;

void f(Counter& c) // Counter 객체를 매개변수로 받는 함수
{
    c.count();
    cout << c.getValue();
}

void g(const Counter& c) // const 객체를 매개변수로 받는 함수
{
    cout << c.getValue();
}

int main1()
{
    Counter cnt; // Counter 객체의 정의
    //cnt.value = 0; // 계수기를 0으로 지움 -> private 멤버 변수에 직접 접근 시 컴파일 오류 발생
    cnt.reset(); // 계수기를 0으로 지움
    //cout << "계수기의 현재 값 : " << cnt.value << endl;
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl; // getValue() 함수를 통해 private 멤버 변수에 접근
    //cnt.value++; // 계수기를 1 증가시킴 -> private 멤버 변수에 직접 접근 시 컴파일 오류 발생
    //cnt.value++;
    cnt.count(); // 계수기를 1 증가시킴
    cnt.count();
    //cout << "계수기의 현재 값 : " << cnt.value << endl;
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl; // getValue() 함수를 통해 private 멤버 변수에 접근

    const Counter c{};
    int n  = c.getValue(); // getValue() 함수를 통해 private 멤버 변수에 접근
    //c.count(); // 계수기를 1 증가시킴 -> const 객체는 멤버 함수를 호출할 수 없음

    return 0;
}