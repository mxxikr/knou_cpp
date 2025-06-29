#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "StackT.h"
#include "MyString.h"
using namespace std;

int main2()
{
    Stack<char> sc(100); // char ���� ����
    sc.push('a'); // char ���� ���
    sc.push('b');
    cout << "CHAR STACK : ";
    while (!sc.empty()) // ������ ������� ������
    {
        cout << sc.pop(); // char ���ÿ��� pop�Ͽ� ���
    }
    cout << endl;

    Stack<int> si(50);  // int ���� ����
    si.push(5); // int ���� ���
    si.push(10);
    cout << "INT STACK : ";
    while (!si.empty()) // ������ ������� ������
    {
        cout << si.pop(); // int ���ÿ��� pop�Ͽ� ���
    }
    cout << endl;

    Stack<MyString> msStack(10); // MyString ���� ����
    MyString s1("KNOU"); // MyString ��ü ����
    MyString s2("Dep."); 
    MyString s3("CS");
    msStack.push(s1); // MyString ���� ���
    msStack.push(s2 + s3); // MyString ��ü�� ���Ͽ� Ǫ��
    cout << "MYSTRING STACK : ";
    while (!msStack.empty())
    {
        cout << msStack.pop() << " ";
    }
    cout << endl;

    return 0;
}