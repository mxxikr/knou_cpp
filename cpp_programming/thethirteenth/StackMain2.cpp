#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "StackT.h"
#include "MyString.h"
using namespace std;

int main2()
{
    Stack<char> sc(100); // char 스택 선언
    sc.push('a'); // char 스택 사용
    sc.push('b');
    cout << "CHAR STACK : ";
    while (!sc.empty()) // 스택이 비어있지 않으면
    {
        cout << sc.pop(); // char 스택에서 pop하여 출력
    }
    cout << endl;

    Stack<int> si(50);  // int 스택 선언
    si.push(5); // int 스택 사용
    si.push(10);
    cout << "INT STACK : ";
    while (!si.empty()) // 스택이 비어있지 않으면
    {
        cout << si.pop(); // int 스택에서 pop하여 출력
    }
    cout << endl;

    Stack<MyString> msStack(10); // MyString 스택 선언
    MyString s1("KNOU"); // MyString 객체 생성
    MyString s2("Dep."); 
    MyString s3("CS");
    msStack.push(s1); // MyString 스택 사용
    msStack.push(s2 + s3); // MyString 객체를 더하여 푸시
    cout << "MYSTRING STACK : ";
    while (!msStack.empty())
    {
        cout << msStack.pop() << " ";
    }
    cout << endl;

    return 0;
}