#ifndef COMPLEX2_H
#define COMPLEX2_H

#include <iostream>
using namespace std;

// 복소수를 표현하는 Complex2 클래스 선언
class Complex2 {
	double rPart, iPart; // 실수부와 허수부 멤버 변수

public:
    // 실수부와 허수부를 초기화
    Complex2(double r = 0, double i = 0);

    // 복소수 + 복소수
    Complex2 operator + (const Complex2& c) const;

    // 복소수 + 실수
    Complex2 operator + (double r) const;

    // 복합 대입 연산자 (복소수 += 복소수)
    Complex2& operator += (const Complex2& c);

    // 실수부 반환 함수 (private 멤버에 접근하기 위함)
    double real() const;

    // 허수부 반환 함수
    double imag() const;

    // 복소수 출력 함수
    void display() const;

    // friend 함수 - 실수 + 복소수 연산자 오버로딩을 위해 선언
    friend Complex2 operator + (double r, const Complex2& c);
};

#endif