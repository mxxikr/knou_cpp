#include "VBStudent.h"
#include "VBEmployee.h"

// Student와 Employee를 상속
class Parttime : public Student, public Employee {
public:
    // Person의 생성자를 명시적으로 호출함
    Parttime(const string& n, const string& s, const string& c)
        : Person(n), Student(n, s), Employee(n, c) {} // Person(n)에서만 Person 생성자 호출이 가능
    void print() const {
        Student::print();
        Employee::print();
    }
};