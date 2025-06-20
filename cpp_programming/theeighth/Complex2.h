#ifndef COMPLEX2_H
#define COMPLEX2_H

#include <iostream>
using namespace std;

// ���Ҽ��� ǥ���ϴ� Complex2 Ŭ���� ����
class Complex2 {
	double rPart, iPart; // �Ǽ��ο� ����� ��� ����

public:
    // �Ǽ��ο� ����θ� �ʱ�ȭ
    Complex2(double r = 0, double i = 0);

    // ���Ҽ� + ���Ҽ�
    Complex2 operator + (const Complex2& c) const;

    // ���Ҽ� + �Ǽ�
    Complex2 operator + (double r) const;

    // ���� ���� ������ (���Ҽ� += ���Ҽ�)
    Complex2& operator += (const Complex2& c);

    // �Ǽ��� ��ȯ �Լ� (private ����� �����ϱ� ����)
    double real() const;

    // ����� ��ȯ �Լ�
    double imag() const;

    // ���Ҽ� ��� �Լ�
    void display() const;

    // friend �Լ� - �Ǽ� + ���Ҽ� ������ �����ε��� ���� ����
    friend Complex2 operator + (double r, const Complex2& c);
};

#endif