#include <iostream>
using namespace std;

int b = 100; // 전역 변수 b

void f(int a) {
    cout << "int 타입의 매개변수 a를 받아서 a * a를 출력 : " << a * a << endl;

}

void f(int a, int b) {
    cout << "int 타입의 매개변수 a와 b를 받아서 a * b를 출력 : " << a * b << endl;
}

void g(int a)
{
    cout << "int 타입의 매개변수 a를 받아서 a * a를 출력 : " << a * a << endl;
}

void g(int a, int b = 100)
{
    cout << "int 타입의 매개변수 a와 b를 받아서 a * b를 출력 : " << a * b << endl;
}

void h(int a)
{
    cout << "int 타입의 매개변수 a를 받아서 a * a를 출력 : " << a * a << endl;
}

void h(float a)
{
    cout << "float 타입의 매개변수 a를 받아서 a * b를 출력 : " << a * b << endl;
}

int main()
{
    f(10);
    f(10, 20);
    g(10, 20);
    h(10);
    h(10.0f);
}