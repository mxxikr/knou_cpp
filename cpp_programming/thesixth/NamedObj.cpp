#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "NamedObj.h"
 
NamedObj::NamedObj(const char* s) { // 생성자 정의
	name = new char[strlen(s) + 1]; // 문자열을 복사할 공간을 할당
	strcpy(name, s); // name에 s 복사
	id = ++nConste; // 생성된 객체의 수를 증가시키고 이를 ID로 부여함
}

NamedObj::~NamedObj() { // 소멸자 정의
	++nDestr; // 소멸된 객체의 수를 증가시킴
	delete[] name; // 동적으로 할당한 메모리 해제
}

// static 데이터 멤버의 정의 및 초기화
int NamedObj::nConste = 0; // static 데이터 멤버는 클래스 선언문 안에서 선언만 해주고 별도의 cpp 파일에서 정의를 해줘야 함
int NamedObj::nDestr = 0;