#include <iostream>
using namespace std;
#include "NamedObj.h" // NamedObj Ŭ���� ���� ���� ��� ����

void f()
{
    NamedObj x("Third"); // �� ��° ��ü�� ����
    x.display();         // �Լ� ��ȯ �� x�� �Ҹ��
}

int main()
{
    cout << "NamedObj Ŭ������ ��ü �� : " // ���� �ƹ� ��ü�� ���� ����
        << NamedObj::nObj() << endl; // ��ü ���� �������� static ��� �Լ��̱� ������ Ŭ���� �̸� �̿��� ȣ�� ����
    NamedObj a("First");  // ù ��° ��ü ����
    NamedObj b("Second"); // �� ��° ��ü ����

    f();
    NamedObj c("Fourth"); // �� ��° ��ü ����
    c.display();
    cout << "NamedObj Ŭ������ ��ü �� : "
        << NamedObj::nObj() << endl;
    return 0;
}