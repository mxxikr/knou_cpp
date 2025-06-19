#include <iostream>
#include "Complex1.h"
using namespace std;

Complex1 Complex1::mul(const Complex1& c) const // 두 복소수의 곱을 반환
{
    double r = rPart * c.rPart - iPart * c.iPart; // 실수 부분 계산
    double i = rPart * c.iPart + iPart * c.rPart; // 허수 부분 계산
    return Complex1(r, i); // 새로운 Complex1 객체를 생성하여 반환
}

Complex1 Complex1::div(const Complex1& c) const // 두 복소수의 나눗셈을 반환
{
    double d = c.rPart * c.rPart + c.iPart * c.iPart; // 분모 계산 (c의 켤레 복소수의 제곱)
    Complex1 c1 = mul(c.conj()); // c의 켤레 복소수와 곱셈
    return Complex1(c1.rPart / d, c1.iPart / d); // 실수 부분과 허수 부분을 분모로 나누어 새로운 Complex1 객체를 반환
}

void Complex1::display() const // 복소수 값을 출력
{
    cout << "(" << rPart; // 실수 부분 출력
    if (iPart > 0)  
        cout << "+" << iPart << "j"; // 허수 부분이 양수일 때는 '+' 기호와 함께 출력
    else if (iPart < 0)
        cout << "-" << -iPart << "j"; // 허수 부분이 음수일 때는 '-' 기호와 함께 출력
    cout << ")";
}