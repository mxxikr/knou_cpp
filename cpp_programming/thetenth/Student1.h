#ifndef STUDENT1_H
#define STUDENT1_H

#include "Person1.h"

// 파생 클래스 Student를 Person을 상속 받아 선언함
class Student : public Person {
public:
    string school; // 학교 정보 저장

    void setSchool(const string& s) { school = s; }
    
    string getSchool() const { return school; }
    
    void print() const { // 출력 함수 오버라이딩
        Person::print();
        cout << " goes to " << school;
    }
};
#endif // STUDENT1_H