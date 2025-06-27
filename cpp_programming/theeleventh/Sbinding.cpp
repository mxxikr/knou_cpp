#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main3()
{
    Person* p1 = new Person("Dudley");
    p1->print(); // Person::print() 호출
    cout << endl;

    Person* p2 = new Student("Harry", "Hogwarts");
    p2->print(); // Person::print() 호출
    cout << endl;

    ((Student*)p2)->print(); // Student::print() 호출 -> p2가 Student 객체를 가리키고 있으리라는 보장이 없음
    cout << endl;
    return 0;
}