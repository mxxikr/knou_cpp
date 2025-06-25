#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyStrinMyStringReceiverMain {
    char* buf;
public:
	MyStrinMyStringReceiverMain(const char* str) { // 생성자
		buf = new char[strlen(str) + 1];
		strcpy(buf, str); // 문자열 복사
    }
    ~MyStrinMyStringReceiverMain() {
        delete[] buf; 
    }
    void print() const {
        cout << buf << endl;
    }
};

int main5() {
    const char* cstr = "C++ is fun";
    MyStrinMyStringReceiverMain s = cstr; // 생성자 자동 호출
    s.print();
    return 0;
}