#include <iostream>
using namespace std;

void f2(int x) {
    cout << "f2(int x) --> " << x << endl;
}

void f2(double x) {
    cout << "f2(double x) --> " << x << endl;
}

int main5() {
    void f2(int x);     // main 함수 안에서 int 타입만 보임

    f2(10);            // f2(int x) --> 10
    f2(20.0);          // f2(int x) --> 20 (double도 int로 변환)
    ::f2(30.0);        // f2(double x) --> 30

    return 0;
}