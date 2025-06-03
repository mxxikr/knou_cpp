#include <iostream>

namespace myNSpc { // 명칭 공간의 이름 : myNSpc
	int count; // 명칭을 선언하는 문장 나열
}

int main2() {
	int a = 10; // 변수 a 선언 및 초기화
	int b = 20; // 변수 b 선언 및 초기화

	/* a와 b의 값 중에서
	 더 큰 값을 출력한다. */
	if (a > b)
		std::cout << a << std::endl;
	else
		std::cout << b << std::endl;

	int c = 10;
	std::cout << "c의 값은 ";
	std::cout << c << "입니다." << std::endl;

	char str[100];
	std::cin >> c >> str;
	std::cout << "c = " << c << ", str = " << str << std::endl;
	
	myNSpc::count = 0;
	std::cout << "myNSpc::count = " << myNSpc::count << std::endl;

	return 0;
}