#include <iostream>

int main3() {
	int val, total = 0;
	std::cout << "10개의 정수를 입력하세요: ";
	{
		int i = 0;
		while (i < 10) {
			std::cin >> val;
			total += val;
			i++;
		}
	}

	std::cout << "입력한 정수의 합은 " << total << "입니다." << std::endl;
	return 0;
}