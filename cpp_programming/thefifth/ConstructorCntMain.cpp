#include <iostream>
#include "ConstructorCounter.h"
using namespace std;

void f(ConstructorCounter& c) // Counter ��ü�� �Ű������� �޴� �Լ�
{
    c.count();
    cout << c.getValue();
}

void g(const ConstructorCounter& c) // const ��ü�� �Ű������� �޴� �Լ�
{
    cout << c.getValue();
}

int main3()
{
    ConstructorCounter cnt;
    //cnt.reset(); // reset() �Լ��� �����ڿ��� �̹� ȣ��ǹǷ� �ʿ� ����
    cout << "������� ���� �� : "
        << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "������� ���� �� : "
        << cnt.getValue() << endl;
    return 0;
}