#include <iostream>
#include <exception>

using std::ostream;

const int DefaultSize = 10;

class Array {
    int* buf;
    int size;

public:
    Array(int s = DefaultSize); // 기본 생성자
	virtual ~Array() { delete[] buf; } // 소멸자
	int& operator[](int offset); // 인덱스 연산자 오버로딩
	const int& operator[](int offset) const; // 상수 인덱스 연산자 오버로딩
	int getsize() const { return size; } // 배열 크기 반환 함수

    class BadIndex: public std::exception {
    public:
        int wrongIndex;
        BadIndex(int n) : wrongIndex(n), exception() {}
        const char* what() const noexcept override {
            return "Array Exception::";
        }
    };

    friend ostream& operator<<(ostream&, Array&);
};