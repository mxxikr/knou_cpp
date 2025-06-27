#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

// Person 객체 포인터 배열을 받아서 모두 출력하는 함수
void PrintPerson(const Person* const p[], int n)
{
    for (int i = 0; i < n; i++) {
        p[i]->print(); // 각 객체의 print() 함수 호출(Person)
        cout << endl;
    }
}

int main2()
{
	Person dudley("Dudley"); // Person 객체 생성
	Student harry("Harry", "Hogwarts"); // Student 객체 생성
	Student ron("Ron", "Hogwarts"); // Student 객체 생성

    dudley.print(); cout << endl; // Dudley 출력
    harry.print(); cout << endl << endl; // Harry goes to Hogwarts 출력

	Person* pPerson[3]; // Person 객체 포인터 배열 생성
    pPerson[0] = &dudley; // Person 객체 저장
    pPerson[1] = &harry; // Student 객체 저장 (업캐스팅)
    pPerson[2] = &ron; // Student 객체 저장 (업캐스팅)
    PrintPerson(pPerson, 3); // 세 객체 모두 출력

    return 0;
}