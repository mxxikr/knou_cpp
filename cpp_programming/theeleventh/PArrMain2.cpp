#include <iostream>
#include <string>
using namespace std;

class Person2 {
    string name;
public:
    Person2(const string& n) : name(n) {} // ������
    virtual void print() const {         // �̸� ��� �Լ� (���� �Լ�)
        cout << name;
    }
};

class Student2 : public Person2 {
    string school;
public:
    Student2(const string& n, const string& s)
        : Person2(n), school(s) {
    }        // ������
    void print() const override { // �̸�, �б��� �Բ� ���
        Person2::print(); // �̸� ���� ���
        cout << " goes to " << school; // �б� ���� ���
    }
};

// Person2 ������ �迭�� �޾� ��� �ο��� ������ ����ϴ� �Լ�
void PrintPerson2(const Person2* const p[], int n)
{
    for (int i = 0; i < n; i++) {
        p[i]->print();   // �� ��ü�� print() �Լ� ȣ�� (������)
        cout << endl;
    }
}

int main4()
{
    // new �����ڷ� ��ü ����(Heap) ����
    Person2* dudley = new Person2("Dudley"); // Person2 ��ü ����
    Student2* harry = new Student2("Harry", "Hogwarts"); // Student2 ��ü ����
    Student2* ron = new Student2("Ron", "Hogwarts"); // Student2 ��ü ����

    // ���� ��ü ��� (��� ��� Ȯ�ο�)
    dudley->print();
    cout << endl;
    harry->print();
    cout << endl;

    // Person2* Ÿ�� ������ �迭�� ��ü �ּ� ����
    Person2* pPerson2[3];
    pPerson2[0] = dudley;
    pPerson2[1] = harry;
    pPerson2[2] = ron;

    // ��� ��ü ���� ���
    PrintPerson2(pPerson2, 3);

    // �������� ������ ��ü �޸� ����
    delete dudley;
    delete harry;
    delete ron;

    return 0;
}