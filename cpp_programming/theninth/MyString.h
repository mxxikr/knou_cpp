#include <iostream>

class MyString {
    int len; // 문자열의 길이
    int bufSize; // 저장 가능한 문자열의 길이
    char* buf;
    MyString(int s); // 생성자(private)
public:
    MyString(); // 디폴트 생성자
    MyString(const char* str); // 생성자
    MyString(const MyString& mstr); // 복사 생성자
    MyString(MyString&& mstr); // 이동 생성자
    ~MyString(); // 소멸자
    int length() const; // 문자열 길이 반환 메소드

    // --- 연산자 다중 정의 ---
    MyString& operator=(const MyString& mstr); // 대입 연산자
    MyString& operator=(MyString&& mstr); // 이동 대입 연산자
    MyString operator+(const MyString& mstr) const; // 문자열 연결 연산자
    MyString& operator+=(const MyString& mstr); // 문자열 추가 연산자
    bool operator==(const MyString& mstr) const; // == 연산자
    bool operator>(const MyString& mstr) const; // > 연산자
    bool operator<(const MyString& mstr) const; // < 연산자
    char& operator[](int i); // [] 연산자
    char operator[](int i) const; // const [] 연산자

    // 스트림 출력 연산자 (friend 함수로 선언)
    friend std::ostream& operator<<(std::ostream& os, const MyString& mstr); // 외부 함수나 클래스가 클래스 내부에 접근 가능
};

// 스트림 출력 연산자 구현 (inline)
inline std::ostream& operator<<(std::ostream& os, const MyString& mstr)
{
    os << mstr.buf;
    return os;
}