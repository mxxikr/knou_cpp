#include "Person.h"

class Student : public Person {
    string school;
public:
    Student(const string& n, const string& s) :
        Person(n), school(s) {
    }
    string getSchool() const { return school; }
    void print() const {
        Person::print();
        cout << " goes to " << school;
    }
};