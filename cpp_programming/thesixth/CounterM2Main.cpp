#include <iostream>
#include "CounterM2.h"

int main3() {
	CounterM2 cnt4(99); // ������ �̿��� ��ü ����
	cnt4.count(); // count �޼ҵ� ȣ��
	std::cout << "CounterM2 cnt4: " << cnt4.getValue() << std::endl;

	CounterM2 cnt5(cnt4);
	cnt5.count(); // ���� ������ ȣ��
	std::cout << "CounterM2 cnt5: " << cnt5.getValue() << std::endl;

	CounterM2 cnt6 = cnt4;
	cnt6.count(); // ���� ���� ������ ȣ��
	std::cout << "CounterM2 cnt6: " << cnt6.getValue() << std::endl;

	return 0;
}