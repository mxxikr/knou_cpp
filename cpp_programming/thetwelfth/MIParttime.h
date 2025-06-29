#ifndef MIPARTTIME_H_INCLUDED
#define MIPARTTIME_H_INCLUDED
#include <string>
#include "MIStudent.h"
#include "MIEmployee.h"
using namespace std;

// Student와 Employee를 모두 상속받음
class Parttime : public Student, public Employee {
public:
    Parttime(const string& s, const string& c)  // 생성자: 학교명, 회사명 전달
        : Student(s), Employee(c) {} // 부모 클래스 생성자 호출
};
#endif // MIPARTTIME_H_INCLUDED