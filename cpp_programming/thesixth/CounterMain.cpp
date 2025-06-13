#include <iostream>
#include "Counter.h"

int main1() {
	Counter cnt; // 초기화가 되지 않은 상태로 value 데이터 멤버 가지고 있는 객체 생성

	Counter cntArr[4]; // OK
	Counter* pt = new Counter[10]; // OK -> 카운터 객체를 동적으로 10개 생성

	std::cout << "cnt.value = " << cnt.getValue() << std::endl; // 초기화되지 않은 값 출력
	std::cout << "cntArr[0].value = " << cntArr[0].getValue() << std::endl; // 초기화되지 않은 값 출력
	std::cout << "pt[0].value = " << pt[0].getValue() << std::endl; // 초기화되지 않은 값 출력
	return 0;
}