#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"

using namespace std;

Person::Person(const char* name, const char* addr)
{
    // 이름을 저장할 공간 할당
    this -> name = new char[strlen(name) + 1]; // +1은 널 종료 문자('\0')를 위한 공간
    // 데이터 멤버 name에 이름을 복사
    strcpy(this -> name, name); // strcpy 함수는 문자열을 복사하는 함수
    this -> addr = new char[strlen(addr) + 1]; // +1은 널 종료 문자('\0')를 위한 공간
    // 데이터 멤버 addr에 주소를 복사
    strcpy(this->addr, addr);
    cout << "Person 객체 생성함(" << name << ")" << endl;
}

Person::~Person() // 소멸자
{
    cout << "Person 객체 제거함(" << name << ")" << endl;
    delete[] name; // 이름 저장 공간 반납
    delete[] addr; // 주소 저장 공간 반납
}

void Person::print() const
{
    cout << addr << "에 사는 " << name << "입니다." << endl;
}

void Person::chAddr(const char* newAddr)
{
    delete[] addr; // 기존 공간 반납
    // 새로운 주소에 맞는 공간 할당
    addr = new char[strlen(newAddr) + 1];
    strcpy(addr, newAddr); // 데이터멤버 addr에 새로운 주소를 복사
}