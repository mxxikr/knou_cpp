#ifndef STUDENT2_H
#define STUDENT2_H

#include <iostream>
#include <string>
#include "Person2.h" 
using namespace std;

class Student : public Person {
    string school;
public:
    Student(const string& n, const string& s) : Person(n) {
        cout << "Student�� ������" << endl;
        school = s;
    }
    ~Student() {
        cout << "Student�� �Ҹ���" << endl;
    }

    string getSchool() const { return school; }
};

#endif // STUDENT2_H