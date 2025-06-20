#include "Complex2.h"

// 전달받은 실수부 r, 허수부 i로 멤버 변수 초기화
Complex2::Complex2(double r, double i) : rPart(r), iPart(i) {}

// 복소수 + 복소수 
Complex2 Complex2::operator + (const Complex2& c) const {
    return Complex2(rPart + c.rPart, iPart + c.iPart); // 각 실수부/허수부끼리 더해서 새로운 복소수 반환
}

// 복소수 + 실수
Complex2 Complex2::operator + (double r) const {
    return Complex2(rPart + r, iPart); // 실수부만 더하고, 허수부는 그대로인 새로운 복소수 반환
}

// 복합 대입 연산자
Complex2& Complex2::operator += (const Complex2& c) {
    rPart += c.rPart;
    iPart += c.iPart; // 현재 객체에 다른 복소수를 더함(현재 객체 자체가 바뀜)
    return *this; // 자기 자신을 참조로 반환(연속 대입 가능)
}

// 실수부 반환 함수
double Complex2::real() const { return rPart; } // 실수부 값 접근

// 허수부 반환 함수
double Complex2::imag() const { return iPart; } // 허수부 값 접근

// 복소수 출력 함수
void Complex2::display() const {
    cout << "(" << rPart;
    if (iPart > 0)                   // 허수부가 양수일 때
        cout << "+" << iPart << "j";
    else if (iPart < 0)              // 허수부가 음수일 때
        cout << "-" << -iPart << "j";
    cout << ")";
}

Complex2 operator + (double r, const Complex2& c) {
    return Complex2(r + c.real(), c.imag());
}

int main2() {
    // 복소수 객체 생성
    Complex2 c1(1, 2);
    Complex2 c2(3, 4);
    Complex2 c3;

    //복소수 + 복소수
    c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();  // 4+6j
    cout << endl;

    // 복소수 + 실수
    c3 = c1 + 10.0;
    cout << "c1 + 10.0 = ";
    c3.display();  // 11+2j
    cout << endl;

    //실수 + 복소수
    c3 = 10.0 + c2;
    cout << "10.0 + c2 = ";
    c3.display();  // 13+4j
    cout << endl;

    // 복합 대입 연산자(복소수 += 복소수)
    c1 += c2;
    cout << "c1 += c2 -> c1 = ";
    c1.display();  // 4+6j
    cout << endl;

    return 0;
}