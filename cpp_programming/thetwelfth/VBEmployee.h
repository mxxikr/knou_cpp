#include "VBPerson.h"
using namespace std;

// virtual 이용해 Person을 가상 기초 클래스로 상속
class Employee : virtual public Person {
    string company;
public:
    Employee(const string& n, const string& c)
        : Person(n), company(c) {}
    void print() const {
        Person::print();
        cout << " is employed by " << company << endl;
    }
};