#include <iostream>
#include "Person.h"
using namespace std;
int main()
{
    Person* p1 = new Person("��ö��", "����� ���α�");
    Person* p2 = new Person("������", "������ ���ؽ�");

    p1 -> print(); // p1 ��ü�� ������ ���

    p2 -> print(); // p2 ��ü�� ������ ���
    cout << endl << "�ּ� ���� : ";
    p2 -> chAddr("������ ����"); // p2 ��ü�� �ּҸ� ����
    p2 -> print(); // ����� p2 ��ü�� ������ ���
    delete p1; // p1 ��ü ����
    delete p2; // p2 ��ü ����
    return 0;
}