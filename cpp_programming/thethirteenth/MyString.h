#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class MyString {
    char* str;
public:
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    MyString(const MyString& s) { // ���� ������
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }
    MyString(MyString&& s) noexcept { // �̵� ������
        str = s.str;
        s.str = nullptr;
    }
    MyString& operator=(const MyString& s) { // ���� ����
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }
    MyString& operator=(MyString&& s) noexcept { // �̵� ����
        if (this != &s) {
            delete[] str;
            str = s.str;
            s.str = nullptr;
        }
        return *this;
    }
    ~MyString() {
        delete[] str;
    }
    // ���ڿ� ���� ������
    MyString operator+(const MyString& s) const {
        char* tmp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(tmp, str);
        strcat(tmp, s.str);
        MyString result(tmp);
        delete[] tmp;
        return result;
    }
    // cout << ����
    friend ostream& operator<<(ostream& os, const MyString& s) {
        os << s.str;
        return os;
    }
};