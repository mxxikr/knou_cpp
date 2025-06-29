#include <iostream>
#include "SwapFT.h"
#include "MyString.h"
using namespace std;

int main5()
{
    int x = 10, y = 20; // 정수형 변수 선언 및 초기화
    cout << "x = " << x << ", y = " << y << endl; 
    cout << "값 교환 후 -> ";
    swapFT(x, y); // swapFT 함수를 사용하여 x와 y의 값 교환
    cout << "x = " << x << ", y = " << y << endl << endl;

    MyString s1("KNOU"), s2("CS"); // MyString 객체 s1과 s2 생성
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    swapFT(s1, s2); // swapFT 함수를 사용하여 s1과 s2의 값 교환
    cout << "값 교환 후 -> ";
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    return 0;
}