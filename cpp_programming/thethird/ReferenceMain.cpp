#include <iostream>

int main() {
	int x{10};
	const int& xRef = x;
	std::cout << xRef << std::endl; // x�� ���� �о� �����
	// xRef += 10; // ����: const ������ ���� ������ �� ����
}