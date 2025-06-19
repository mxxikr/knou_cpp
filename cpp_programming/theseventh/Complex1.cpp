#include <iostream>
#include "Complex1.h"
using namespace std;

Complex1 Complex1::mul(const Complex1& c) const // �� ���Ҽ��� ���� ��ȯ
{
    double r = rPart * c.rPart - iPart * c.iPart; // �Ǽ� �κ� ���
    double i = rPart * c.iPart + iPart * c.rPart; // ��� �κ� ���
    return Complex1(r, i); // ���ο� Complex1 ��ü�� �����Ͽ� ��ȯ
}

Complex1 Complex1::div(const Complex1& c) const // �� ���Ҽ��� �������� ��ȯ
{
    double d = c.rPart * c.rPart + c.iPart * c.iPart; // �и� ��� (c�� �ӷ� ���Ҽ��� ����)
    Complex1 c1 = mul(c.conj()); // c�� �ӷ� ���Ҽ��� ����
    return Complex1(c1.rPart / d, c1.iPart / d); // �Ǽ� �κа� ��� �κ��� �и�� ������ ���ο� Complex1 ��ü�� ��ȯ
}

void Complex1::display() const // ���Ҽ� ���� ���
{
    cout << "(" << rPart; // �Ǽ� �κ� ���
    if (iPart > 0)  
        cout << "+" << iPart << "j"; // ��� �κ��� ����� ���� '+' ��ȣ�� �Բ� ���
    else if (iPart < 0)
        cout << "-" << -iPart << "j"; // ��� �κ��� ������ ���� '-' ��ȣ�� �Բ� ���
    cout << ")";
}