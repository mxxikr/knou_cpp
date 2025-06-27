#include <iostream>
#include <string>
using namespace std;

class Person3 {
    string name;
public:
    Person3(const string& n) : name(n) {}
    virtual ~Person3() {}
    string getName() const { return name; }
};

class Student3 : public Person3 {
    string school;
public:
    Student3(const string& n, const string& s) : Person3(n), school(s) {}
    string getSchool() const { return school; }
};

int main6() {
    // static_cast�� �ٿ� ĳ������ ���������� �����ϴ� ���
    Person3* pPrsn1 = new Person3("Dudley");
    Student3* pStdnt1 = new Student3("Harry", "Hogwarts");
    Person3* pPrsn2 = pStdnt1; // Student3 ��ü�� �ּҸ� Person3 �����ͷ� ��ĳ����

    Student3* pStdnt2 = static_cast<Student3*>(pPrsn2); // ������ Student3 ��ü�� ����Ű�� �����ϱ� ���� ����
    cout << pStdnt2->getSchool() << endl; // Hogwarts�� ��µ�

    // static_cast�� �������� �ٿ� ĳ������ �� ���
    pPrsn2 = pPrsn1; // pPrsn2�� Person3 ��ü�� ����Ŵ
    Student3* pStdnt3 = static_cast<Student3*>(pPrsn2); // Person3 ��ü�� Student3*�� ĳ����
    cout << pStdnt3->getSchool() << endl; // �������� ��ȯ���� ���� ���α׷��� �̻��ϰ� �����ϰų� ������ �߻��� �� ����

    // dynamic_cast ���
    pPrsn2 = pPrsn1; // Person3 ��ü�� ����Ŵ
    Student3* pStdnt4 = dynamic_cast<Student3*>(pPrsn2); // Person3 Ÿ���� ������ Student3�� �ƴϴϱ� nullptr ��ȯ
    if (pStdnt4)
        cout << pStdnt4->getSchool() << endl;
    else
        cout << "ĳ���� ����" << endl; // ĳ���� ���ж�� ��µ�

    pPrsn2 = pStdnt1; // Student3 ��ü�� ����Ŵ
    Student3* pStdnt5 = dynamic_cast<Student3*>(pPrsn2); // ������ Student3 ��ü�� ���� ��ȯ
    if (pStdnt5)
        cout << pStdnt5->getSchool() << endl; // Hogwarts�� ��µ�
    else
        cout << "ĳ���� ����" << endl;

    delete pPrsn1;
    delete pStdnt1;

    return 0;
}