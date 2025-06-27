#include <iostream>
#include <string>
using namespace std;

class Person2 {
    string name;
public:
    Person2(const string& n) : name(n) {} // 생성자
    virtual void print() const {         // 이름 출력 함수 (가상 함수)
        cout << name;
    }
};

class Student2 : public Person2 {
    string school;
public:
    Student2(const string& n, const string& s)
        : Person2(n), school(s) {
    }        // 생성자
    void print() const override { // 이름, 학교를 함께 출력
        Person2::print(); // 이름 먼저 출력
        cout << " goes to " << school; // 학교 정보 출력
    }
};

// Person2 포인터 배열을 받아 모든 인원의 정보를 출력하는 함수
void PrintPerson2(const Person2* const p[], int n)
{
    for (int i = 0; i < n; i++) {
        p[i]->print();   // 각 객체의 print() 함수 호출 (다형성)
        cout << endl;
    }
}

int main4()
{
    // new 연산자로 객체 동적(Heap) 생성
    Person2* dudley = new Person2("Dudley"); // Person2 객체 생성
    Student2* harry = new Student2("Harry", "Hogwarts"); // Student2 객체 생성
    Student2* ron = new Student2("Ron", "Hogwarts"); // Student2 객체 생성

    // 개별 객체 출력 (출력 결과 확인용)
    dudley->print();
    cout << endl;
    harry->print();
    cout << endl;

    // Person2* 타입 포인터 배열에 객체 주소 저장
    Person2* pPerson2[3];
    pPerson2[0] = dudley;
    pPerson2[1] = harry;
    pPerson2[2] = ron;

    // 모든 객체 정보 출력
    PrintPerson2(pPerson2, 3);

    // 동적으로 생성한 객체 메모리 해제
    delete dudley;
    delete harry;
    delete ron;

    return 0;
}