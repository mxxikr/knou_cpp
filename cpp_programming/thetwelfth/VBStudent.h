#include "VBPerson.h"
using namespace std;

// virtual 이용해 Person을 가상 기초 클래스로 상속
class Student : virtual public Person {
    string school;
public:
    Student(const string& n, const string& s) // 생성자: 이름, 학교명 전달
        : Person(n), school(s) {}
    void print() const { // print 함수 오버라이드
        Person::print(); // 이름 출력(부모 함수 호출)
        cout << " goes to " << school << endl;
    }
};