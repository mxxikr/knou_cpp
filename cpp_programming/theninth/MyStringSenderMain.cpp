#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class MyStringSenderMain {
    char* buf;
public:
	MyStringSenderMain(const char* str) { // 생성자
		buf = new char[strlen(str) + 1]; // 문자열 길이 + 널 문자 공간
		strcpy(buf, str); // 문자열 복사
    }

	~MyStringSenderMain() { // 소멸자
		delete[] buf; // 동적 할당된 메모리 해제
    }
    
    // C 문자열(char*)로 자동 변환
	operator char* () const { // MyStringSenderMain -> char* 변환 시 자동 호출
		char* pt = new char[strlen(buf) + 1]; // 새로운 동적 메모리 할당
		strcpy(pt, buf); // buf의 내용을 pt로 복사
		return pt; // pt를 반환
    }
};

int main4() {
    MyStringSenderMain s("Hello Class!");
    char* cstr = s; // operator char*() 작동
    cout << cstr << endl;
    delete[] cstr;
    return 0;
}