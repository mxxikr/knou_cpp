#ifndef COMPLEX2_H
#define COMPLEX2_H

#include <iostream>
using namespace std;

class Complex2stream {
    double rPart, iPart; // �Ǽ���, �����
public:
    // ������
    Complex2stream(double r = 0, double i = 0);

    // ������ �����ε� �� ��� �Լ� ����
    Complex2stream operator + (const Complex2stream& c) const;
    Complex2stream operator + (double r) const;
    Complex2stream& operator += (const Complex2stream& c);

    // �Ǽ���, ����� ���ٿ�
    double real() const;
    double imag() const;

    // friend�� << ������ ������ private ��� ������ ���
    friend ostream& operator<<(ostream& os, const Complex2stream& c);
};

#endif