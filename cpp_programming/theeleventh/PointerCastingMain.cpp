#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {}
    void introduce() { cout << "이름: " << name << endl; }
};

class Student : public Person {
public:
    string school;
    Student(string n, string s) : Person(n), school(s) {}
    void showSchool() { cout << "학교: " << school << endl; }
};

int main1()
{
    Person* pPrsn1, * pPrsn2;
    Person dudley("Dudley");
    Student* pStdnt1, * pStdnt2;
    Student harry("Harry", "Hogwarts");

    pPrsn1 = &dudley;    // 부모 포인터에 부모 객채 OK
    pStdnt1 = &harry;    // 자식 포인터에 자식 객체 OK
    pPrsn2 = &harry;     // 부모 포인터에 자식 객체(업캐스팅) OK
    //pStdnt2 = &dudley;   // 자식 포인터에 부모 객체(다운캐스팅) Error!

    cout << "--- pPrsn1 -> dudley ---" << endl;
    pPrsn1->introduce();

    cout << "--- pStdnt1 -> harry ---" << endl;
    pStdnt1->introduce();
    pStdnt1->showSchool();

    cout << "--- pPrsn2 -> harry (업캐스팅) ---" << endl;
    pPrsn2->introduce();
    // pPrsn2->showSchool(); // Person 포인터로는 Student 함수 접근 불가

    return 0;
}