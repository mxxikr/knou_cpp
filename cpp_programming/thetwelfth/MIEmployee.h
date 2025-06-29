#ifndef MIEMPLOYEE_H_INCLUDED
#define MIEMPLOYEE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Employee {
    string company; // 회사 이름 저장 변수
public:
    Employee(const string& c) : company(c) {} // 생성자에서 회사명 초기화
    void printCompany() const { cout << company << endl; } // 회사명 출력 함수
};

#endif // MIEMPLOYEE_H_INCLUDED