#include "Complex2stream.h"

// 생성자 구현
Complex2stream::Complex2stream(double r, double i) : rPart(r), iPart(i) {}

// 복소수 + 복소수
Complex2stream Complex2stream::operator + (const Complex2stream& c) const {
    return Complex2stream(rPart + c.rPart, iPart + c.iPart);
}

// 복소수 + 실수
Complex2stream Complex2stream::operator + (double r) const {
    return Complex2stream(rPart + r, iPart);
}

// 복합 대입 (+=)
Complex2stream& Complex2stream::operator += (const Complex2stream& c) {
    rPart += c.rPart;
    iPart += c.iPart;
    return *this;
}

// 실수부 반환
double Complex2stream::real() const { return rPart; }

// 허수부 반환
double Complex2stream::imag() const { return iPart; }

// 스트림 출력 연산자 오버로딩 -> os << c; 형태로 사용할 수 있게 해줌
ostream& operator<<(ostream& os, const Complex2stream& c)
{
    os << "(" << c.rPart;
    if (c.iPart > 0)
        os << "+j" << c.iPart;       // 허수부가 +일 때
    else if (c.iPart < 0)
        os << "-j" << -c.iPart;      // 허수부가 -일 때 음수 부호 붙이기
    os << ")";
    return os;   // 반드시 os를 반환해야 연속 출력(<< <<) 가능
}