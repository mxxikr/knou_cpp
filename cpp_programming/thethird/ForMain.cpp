#include <iostream>

int main2() {
	int val, total = 0;
	std::cout << "10���� ������ �Է��ϼ���: ";

	for (int i = 0; i < 10; i++) {
		std::cin >> val;
		total += val;
	}

	std::cout << "�Է��� ������ ���� " << total << "�Դϴ�." << std::endl;

	int arr[5] = { 2, 3, 9, 4, 7 };
	int sum = 0;

	for (int a : arr)
		sum += a;

	std::cout << "�迭�� �հ� = " << sum << std::endl;

	return 0;
}