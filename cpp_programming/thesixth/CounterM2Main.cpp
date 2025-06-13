#include <iostream>
#include "CounterM2.h"

int main3() {
	CounterM2 cnt4(99); // 생성자 이용해 객체 생성
	cnt4.count(); // count 메소드 호출
	std::cout << "CounterM2 cnt4: " << cnt4.getValue() << std::endl;

	CounterM2 cnt5(cnt4);
	cnt5.count(); // 복사 생성자 호출
	std::cout << "CounterM2 cnt5: " << cnt5.getValue() << std::endl;

	CounterM2 cnt6 = cnt4;
	cnt6.count(); // 복사 대입 연산자 호출
	std::cout << "CounterM2 cnt6: " << cnt6.getValue() << std::endl;

	return 0;
}