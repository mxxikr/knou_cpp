#include <iostream>
using namespace std;

void f2(int x) {
    cout << "f2(int x) --> " << x << endl;
}

void f2(double x) {
    cout << "f2(double x) --> " << x << endl;
}

int main5() {
    void f2(int x);     // main �Լ� �ȿ��� int Ÿ�Ը� ����

    f2(10);            // f2(int x) --> 10
    f2(20.0);          // f2(int x) --> 20 (double�� int�� ��ȯ)
    ::f2(30.0);        // f2(double x) --> 30

    return 0;
}