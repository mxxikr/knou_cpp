#ifndef PERSON1_H_INCLUDED
#define PERSON1_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name; // 이름 저장
    void setName(const string& n) { name = n; } // 이름 설정
    string getName() const { return name; } // 이름 반환
    void print() const { cout << name; } // 이름 출력
};

#endif // PERSON1_H_INCLUDED