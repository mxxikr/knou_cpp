#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main3()
{
    Person* p1 = new Person("Dudley");
    p1->print(); // Person::print() ȣ��
    cout << endl;

    Person* p2 = new Student("Harry", "Hogwarts");
    p2->print(); // Person::print() ȣ��
    cout << endl;

    ((Student*)p2)->print(); // Student::print() ȣ�� -> p2�� Student ��ü�� ����Ű�� ��������� ������ ����
    cout << endl;
    return 0;
}