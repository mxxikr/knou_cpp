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
    MyString(const MyString& s) { // 복사 생성자
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }
    MyString(MyString&& s) noexcept { // 이동 생성자
        str = s.str;
        s.str = nullptr;
    }
    MyString& operator=(const MyString& s) { // 복사 대입
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }
    MyString& operator=(MyString&& s) noexcept { // 이동 대입
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
    // 문자열 연결 연산자
    MyString operator+(const MyString& s) const {
        char* tmp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(tmp, str);
        strcat(tmp, s.str);
        MyString result(tmp);
        delete[] tmp;
        return result;
    }
    // cout << 지원
    friend ostream& operator<<(ostream& os, const MyString& s) {
        os << s.str;
        return os;
    }
};