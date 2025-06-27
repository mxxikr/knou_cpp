#include <iostream>
using namespace std;

void f3(int x) {
    cout << "f3(int x) --> " << x << endl;
}

void f3(const char* x) {
    cout << "f3(const char *x) --> " << x << endl;
}

int main6() {
    void f3(int x); // main 내부에서 int 타입 버전만 보임

    f3(10);         // f3(int x) --> 10
     //f3("abc");   // 에러! main 내부 선언 때문에 문자열 버전 숨김
    ::f3("abc");    // f3(const char *x) --> abc (글로벌 버전 사용)
    return 0;
}