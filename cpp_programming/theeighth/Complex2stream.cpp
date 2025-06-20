#include "Complex2stream.h"

// ������ ����
Complex2stream::Complex2stream(double r, double i) : rPart(r), iPart(i) {}

// ���Ҽ� + ���Ҽ�
Complex2stream Complex2stream::operator + (const Complex2stream& c) const {
    return Complex2stream(rPart + c.rPart, iPart + c.iPart);
}

// ���Ҽ� + �Ǽ�
Complex2stream Complex2stream::operator + (double r) const {
    return Complex2stream(rPart + r, iPart);
}

// ���� ���� (+=)
Complex2stream& Complex2stream::operator += (const Complex2stream& c) {
    rPart += c.rPart;
    iPart += c.iPart;
    return *this;
}

// �Ǽ��� ��ȯ
double Complex2stream::real() const { return rPart; }

// ����� ��ȯ
double Complex2stream::imag() const { return iPart; }

// ��Ʈ�� ��� ������ �����ε� -> os << c; ���·� ����� �� �ְ� ����
ostream& operator<<(ostream& os, const Complex2stream& c)
{
    os << "(" << c.rPart;
    if (c.iPart > 0)
        os << "+j" << c.iPart;       // ����ΰ� +�� ��
    else if (c.iPart < 0)
        os << "-j" << -c.iPart;      // ����ΰ� -�� �� ���� ��ȣ ���̱�
    os << ")";
    return os;   // �ݵ�� os�� ��ȯ�ؾ� ���� ���(<< <<) ����
}