#ifndef PERSON1_H_INCLUDED
#define PERSON1_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name; // �̸� ����
    void setName(const string& n) { name = n; } // �̸� ����
    string getName() const { return name; } // �̸� ��ȯ
    void print() const { cout << name; } // �̸� ���
};

#endif // PERSON1_H_INCLUDED