#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {}
    void introduce() { cout << "�̸�: " << name << endl; }
};

class Student : public Person {
public:
    string school;
    Student(string n, string s) : Person(n), school(s) {}
    void showSchool() { cout << "�б�: " << school << endl; }
};

int main1()
{
    Person* pPrsn1, * pPrsn2;
    Person dudley("Dudley");
    Student* pStdnt1, * pStdnt2;
    Student harry("Harry", "Hogwarts");

    pPrsn1 = &dudley;    // �θ� �����Ϳ� �θ� ��ä OK
    pStdnt1 = &harry;    // �ڽ� �����Ϳ� �ڽ� ��ü OK
    pPrsn2 = &harry;     // �θ� �����Ϳ� �ڽ� ��ü(��ĳ����) OK
    //pStdnt2 = &dudley;   // �ڽ� �����Ϳ� �θ� ��ü(�ٿ�ĳ����) Error!

    cout << "--- pPrsn1 -> dudley ---" << endl;
    pPrsn1->introduce();

    cout << "--- pStdnt1 -> harry ---" << endl;
    pStdnt1->introduce();
    pStdnt1->showSchool();

    cout << "--- pPrsn2 -> harry (��ĳ����) ---" << endl;
    pPrsn2->introduce();
    // pPrsn2->showSchool(); // Person �����ͷδ� Student �Լ� ���� �Ұ�

    return 0;
}