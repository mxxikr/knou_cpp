#include "Complex2.h"

// ���޹��� �Ǽ��� r, ����� i�� ��� ���� �ʱ�ȭ
Complex2::Complex2(double r, double i) : rPart(r), iPart(i) {}

// ���Ҽ� + ���Ҽ� 
Complex2 Complex2::operator + (const Complex2& c) const {
    return Complex2(rPart + c.rPart, iPart + c.iPart); // �� �Ǽ���/����γ��� ���ؼ� ���ο� ���Ҽ� ��ȯ
}

// ���Ҽ� + �Ǽ�
Complex2 Complex2::operator + (double r) const {
    return Complex2(rPart + r, iPart); // �Ǽ��θ� ���ϰ�, ����δ� �״���� ���ο� ���Ҽ� ��ȯ
}

// ���� ���� ������
Complex2& Complex2::operator += (const Complex2& c) {
    rPart += c.rPart;
    iPart += c.iPart; // ���� ��ü�� �ٸ� ���Ҽ��� ����(���� ��ü ��ü�� �ٲ�)
    return *this; // �ڱ� �ڽ��� ������ ��ȯ(���� ���� ����)
}

// �Ǽ��� ��ȯ �Լ�
double Complex2::real() const { return rPart; } // �Ǽ��� �� ����

// ����� ��ȯ �Լ�
double Complex2::imag() const { return iPart; } // ����� �� ����

// ���Ҽ� ��� �Լ�
void Complex2::display() const {
    cout << "(" << rPart;
    if (iPart > 0)                   // ����ΰ� ����� ��
        cout << "+" << iPart << "j";
    else if (iPart < 0)              // ����ΰ� ������ ��
        cout << "-" << -iPart << "j";
    cout << ")";
}

Complex2 operator + (double r, const Complex2& c) {
    return Complex2(r + c.real(), c.imag());
}

int main2() {
    // ���Ҽ� ��ü ����
    Complex2 c1(1, 2);
    Complex2 c2(3, 4);
    Complex2 c3;

    //���Ҽ� + ���Ҽ�
    c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();  // 4+6j
    cout << endl;

    // ���Ҽ� + �Ǽ�
    c3 = c1 + 10.0;
    cout << "c1 + 10.0 = ";
    c3.display();  // 11+2j
    cout << endl;

    //�Ǽ� + ���Ҽ�
    c3 = 10.0 + c2;
    cout << "10.0 + c2 = ";
    c3.display();  // 13+4j
    cout << endl;

    // ���� ���� ������(���Ҽ� += ���Ҽ�)
    c1 += c2;
    cout << "c1 += c2 -> c1 = ";
    c1.display();  // 4+6j
    cout << endl;

    return 0;
}