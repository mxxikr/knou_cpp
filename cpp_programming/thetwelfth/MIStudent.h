#ifndef MISTUDENT_H_INCLUDED
#define MISTUDENT_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Student {
    string school; // �б� �̸� ���� ����
public:
    Student(const string& s) : school(s) {} // �����ڿ��� �б��� �ʱ�ȭ
    void printSchool() const { cout << school << endl; } // �б��� ��� �Լ�

};
#endif // MISTUDENT_H_INCLUDED