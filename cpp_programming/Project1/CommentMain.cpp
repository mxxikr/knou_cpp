#include <iostream>

namespace myNSpc { // ��Ī ������ �̸� : myNSpc
	int count; // ��Ī�� �����ϴ� ���� ����
}

int main2() {
	int a = 10; // ���� a ���� �� �ʱ�ȭ
	int b = 20; // ���� b ���� �� �ʱ�ȭ

	/* a�� b�� �� �߿���
	 �� ū ���� ����Ѵ�. */
	if (a > b)
		std::cout << a << std::endl;
	else
		std::cout << b << std::endl;

	int c = 10;
	std::cout << "c�� ���� ";
	std::cout << c << "�Դϴ�." << std::endl;

	char str[100];
	std::cin >> c >> str;
	std::cout << "c = " << c << ", str = " << str << std::endl;
	
	myNSpc::count = 0;
	std::cout << "myNSpc::count = " << myNSpc::count << std::endl;

	return 0;
}