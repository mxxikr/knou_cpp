#include <iostream>
#include "Complex2stream.h"
using namespace std;

int main()
{
    // 복소수 객체 2개 생성
    Complex2stream a(10, 20);    
    Complex2stream b(5, -3);

    // 스트림 출력 오버로딩 덕분에 복소수 객체를 바로 출력 가능
    cout << a << " + " << b << " = " << a + b << endl;

    return 0;
}