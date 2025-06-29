#include "VBPerson.h"
using namespace std;

// virtual �̿��� Person�� ���� ���� Ŭ������ ���
class Student : virtual public Person {
    string school;
public:
    Student(const string& n, const string& s) // ������: �̸�, �б��� ����
        : Person(n), school(s) {}
    void print() const { // print �Լ� �������̵�
        Person::print(); // �̸� ���(�θ� �Լ� ȣ��)
        cout << " goes to " << school << endl;
    }
};