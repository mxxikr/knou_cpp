#ifndef COMPLEX2_H
#define COMPLEX2_H

#include <iostream>
using namespace std;

class Complex2stream {
    double rPart, iPart; // 실수부, 허수부
public:
    // 생성자
    Complex2stream(double r = 0, double i = 0);

    // 연산자 오버로딩 및 멤버 함수 선언
    Complex2stream operator + (const Complex2stream& c) const;
    Complex2stream operator + (double r) const;
    Complex2stream& operator += (const Complex2stream& c);

    // 실수부, 허수부 접근용
    double real() const;
    double imag() const;

    // friend로 << 연산자 선언해 private 멤버 접근을 허용
    friend ostream& operator<<(ostream& os, const Complex2stream& c);
};

#endif