#ifndef MIEMPLOYEE_H_INCLUDED
#define MIEMPLOYEE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Employee {
    string company; // ȸ�� �̸� ���� ����
public:
    Employee(const string& c) : company(c) {} // �����ڿ��� ȸ��� �ʱ�ȭ
    void printCompany() const { cout << company << endl; } // ȸ��� ��� �Լ�
};

#endif // MIEMPLOYEE_H_INCLUDED