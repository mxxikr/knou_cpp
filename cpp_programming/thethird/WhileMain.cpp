#include <iostream>

int main3() {
	int val, total = 0;
	std::cout << "10���� ������ �Է��ϼ���: ";
	{
		int i = 0;
		while (i < 10) {
			std::cin >> val;
			total += val;
			i++;
		}
	}

	std::cout << "�Է��� ������ ���� " << total << "�Դϴ�." << std::endl;
	return 0;
}