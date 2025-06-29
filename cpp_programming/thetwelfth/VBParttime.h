#include "VBStudent.h"
#include "VBEmployee.h"

// Student�� Employee�� ���
class Parttime : public Student, public Employee {
public:
    // Person�� �����ڸ� ��������� ȣ����
    Parttime(const string& n, const string& s, const string& c)
        : Person(n), Student(n, s), Employee(n, c) {} // Person(n)������ Person ������ ȣ���� ����
    void print() const {
        Student::print();
        Employee::print();
    }
};