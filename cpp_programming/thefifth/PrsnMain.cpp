#include <iostream>
#include "Person.h"
using namespace std;
int main()
{
    Person* p1 = new Person("이철수", "서울시 종로구");
    Person* p2 = new Person("박은미", "강원도 동해시");

    p1 -> print(); // p1 객체의 정보를 출력

    p2 -> print(); // p2 객체의 정보를 출력
    cout << endl << "주소 변경 : ";
    p2 -> chAddr("대전시 서구"); // p2 객체의 주소를 변경
    p2 -> print(); // 변경된 p2 객체의 정보를 출력
    delete p1; // p1 객체 제거
    delete p2; // p2 객체 제거
    return 0;
}