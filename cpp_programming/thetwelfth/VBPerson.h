#ifndef VBPERSON_H_INCLUDED
#define VBPERSON_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person(const string& n) : name(n) {}
    virtual ~Person() {} // ���� �Ҹ���(��� ���)
    virtual void print() const { cout << name; }  // �̸� ����Լ�(���� �Լ�)
};
#endif // VBPERSON_H_INCLUDED