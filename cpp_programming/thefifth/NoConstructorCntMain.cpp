#include <iostream>
#include "NoConstructorCounter.h"
using namespace std;

void f(NoConstructorCounter& c) // Counter ��ü�� �Ű������� �޴� �Լ�
{
    c.count();
    cout << c.getValue();
}

void g(const NoConstructorCounter& c) // const ��ü�� �Ű������� �޴� �Լ�
{
    cout << c.getValue();
}

int main2()
{
    NoConstructorCounter cnt;
    cnt.reset();
    cout << "������� ���� �� : "
        << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "������� ���� �� : "
        << cnt.getValue() << endl;
    return 0;
}