#ifndef MISTUDENT_H_INCLUDED
#define MISTUDENT_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Student {
    string school; // 학교 이름 저장 변수
public:
    Student(const string& s) : school(s) {} // 생성자에서 학교명 초기화
    void printSchool() const { cout << school << endl; } // 학교명 출력 함수

};
#endif // MISTUDENT_H_INCLUDED