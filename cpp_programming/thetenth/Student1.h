#ifndef STUDENT1_H
#define STUDENT1_H

#include "Person1.h"

// �Ļ� Ŭ���� Student�� Person�� ��� �޾� ������
class Student : public Person {
public:
    string school; // �б� ���� ����

    void setSchool(const string& s) { school = s; }
    
    string getSchool() const { return school; }
    
    void print() const { // ��� �Լ� �������̵�
        Person::print();
        cout << " goes to " << school;
    }
};
#endif // STUDENT1_H