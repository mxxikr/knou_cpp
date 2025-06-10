#include <iostream>
#include "Counter.h"
using namespace std;

void f(Counter& c) // Counter ��ü�� �Ű������� �޴� �Լ�
{
    c.count();
    cout << c.getValue();
}

void g(const Counter& c) // const ��ü�� �Ű������� �޴� �Լ�
{
    cout << c.getValue();
}

int main1()
{
    Counter cnt; // Counter ��ü�� ����
    //cnt.value = 0; // ����⸦ 0���� ���� -> private ��� ������ ���� ���� �� ������ ���� �߻�
    cnt.reset(); // ����⸦ 0���� ����
    //cout << "������� ���� �� : " << cnt.value << endl;
    cout << "������� ���� �� : " << cnt.getValue() << endl; // getValue() �Լ��� ���� private ��� ������ ����
    //cnt.value++; // ����⸦ 1 ������Ŵ -> private ��� ������ ���� ���� �� ������ ���� �߻�
    //cnt.value++;
    cnt.count(); // ����⸦ 1 ������Ŵ
    cnt.count();
    //cout << "������� ���� �� : " << cnt.value << endl;
    cout << "������� ���� �� : " << cnt.getValue() << endl; // getValue() �Լ��� ���� private ��� ������ ����

    const Counter c{};
    int n  = c.getValue(); // getValue() �Լ��� ���� private ��� ������ ����
    //c.count(); // ����⸦ 1 ������Ŵ -> const ��ü�� ��� �Լ��� ȣ���� �� ����

    return 0;
}