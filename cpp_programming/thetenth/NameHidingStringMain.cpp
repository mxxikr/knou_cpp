#include <iostream>
using namespace std;

void f3(int x) {
    cout << "f3(int x) --> " << x << endl;
}

void f3(const char* x) {
    cout << "f3(const char *x) --> " << x << endl;
}

int main6() {
    void f3(int x); // main ���ο��� int Ÿ�� ������ ����

    f3(10);         // f3(int x) --> 10
     //f3("abc");   // ����! main ���� ���� ������ ���ڿ� ���� ����
    ::f3("abc");    // f3(const char *x) --> abc (�۷ι� ���� ���)
    return 0;
}