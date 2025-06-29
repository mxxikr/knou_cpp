#ifndef VBPERSON_H_INCLUDED
#define VBPERSON_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person(const string& n) : name(n) {}
    virtual ~Person() {} // 가상 소멸자(상속 대비)
    virtual void print() const { cout << name; }  // 이름 출력함수(가상 함수)
};
#endif // VBPERSON_H_INCLUDED