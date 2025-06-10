#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"

using namespace std;

Person::Person(const char* name, const char* addr)
{
    // �̸��� ������ ���� �Ҵ�
    this -> name = new char[strlen(name) + 1]; // +1�� �� ���� ����('\0')�� ���� ����
    // ������ ��� name�� �̸��� ����
    strcpy(this -> name, name); // strcpy �Լ��� ���ڿ��� �����ϴ� �Լ�
    this -> addr = new char[strlen(addr) + 1]; // +1�� �� ���� ����('\0')�� ���� ����
    // ������ ��� addr�� �ּҸ� ����
    strcpy(this->addr, addr);
    cout << "Person ��ü ������(" << name << ")" << endl;
}

Person::~Person() // �Ҹ���
{
    cout << "Person ��ü ������(" << name << ")" << endl;
    delete[] name; // �̸� ���� ���� �ݳ�
    delete[] addr; // �ּ� ���� ���� �ݳ�
}

void Person::print() const
{
    cout << addr << "�� ��� " << name << "�Դϴ�." << endl;
}

void Person::chAddr(const char* newAddr)
{
    delete[] addr; // ���� ���� �ݳ�
    // ���ο� �ּҿ� �´� ���� �Ҵ�
    addr = new char[strlen(newAddr) + 1];
    strcpy(addr, newAddr); // �����͸�� addr�� ���ο� �ּҸ� ����
}