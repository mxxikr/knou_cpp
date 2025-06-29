#include "VBPerson.h"
using namespace std;

// virtual �̿��� Person�� ���� ���� Ŭ������ ���
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