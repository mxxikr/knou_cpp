#include <iostream>

int main2() {
	int val, total = 0;
	std::cout << "10개의 정수를 입력하세요: ";

	for (int i = 0; i < 10; i++) {
		std::cin >> val;
		total += val;
	}

	std::cout << "입력한 정수의 합은 " << total << "입니다." << std::endl;

	int arr[5] = { 2, 3, 9, 4, 7 };
	int sum = 0;

	for (int a : arr)
		sum += a;

	std::cout << "배열의 합계 = " << sum << std::endl;

	return 0;
}