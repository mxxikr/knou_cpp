#include <iostream>
#include "CounterM.h"

int main2() {
	CounterM cnt1(999); // 생성자에 해당하는 형태로 객체 생성해야 함
	//CounterM cnt2; // 에러

	cnt1.count(); // value 를 증가 시킴
	std::cout << "cnt1: " << cnt1.getValue() << std::endl;
	
	CounterM cnt2(-100); // maxValue -100, value 0
	cnt2.count(); // value 를 증가 시킴
	std::cout << "cnt2: " << cnt2.getValue() << std::endl;

	//CounterM cntMArr1[3]; // 에러
	CounterM cntMArr2[3] = { CounterM(99), CounterM(99), CounterM(999) }; // OK -> 인수 전달해 초기 값 제공
	cntMArr2[0].count(); // value 를 증가 시킴
	std::cout << "cntMArr2[0]: " << cntMArr2[0].getValue() << std::endl;
	cntMArr2[1].count(); // value 를 증가 시킴
	std::cout << "cntMArr2[1]: " << cntMArr2[1].getValue() << std::endl;
	cntMArr2[2].count(); // value 를 증가 시킴
	std::cout << "cntMArr2[2]: " << cntMArr2[2].getValue() << std::endl;
	//CounterM* pt = new CounterM[10]; // 에러

	return 0;
}