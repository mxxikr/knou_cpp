#include <iostream>
#include <cstring>
#include "MyString.h" 

using namespace std;    

int main3() {
    MyString str1("MyString class");
    MyString str2("Object Oriented ");
    MyString str3;

    cout << str1 << endl; // ���ڿ� ���
    str3 = "Programming"; // ������ �� ��ȯ �� �̵� ����
    cout << str3 << "�� ���ڿ� ���̴� ";
    cout << str3.length() << endl; // ���ڿ� ���̸� ���ϴ� �޼ҵ�
    str1 = str2; // ���� �����ڷ� ���ڿ� ����
    cout << str1 << endl;
    str1 = str1 + str3; // ���ڿ� ���� ������, �̵� ���� ������
    cout << str1 << endl;

    return 0;
}