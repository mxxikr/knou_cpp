#include <iostream>

int main9() {
	int* ptrVar = new int; // ���� �޸� �Ҵ�
	*ptrVar = 10; // �Ҵ�� �޸𸮿� �� ����
	std::cout << "���� �޸𸮿��� ���� ��: " << *ptrVar << std::endl; // �� ���

	delete ptrVar; // ���� �޸� ���� -> �޸� �ݳ�
	ptrVar = nullptr; // ������ �ʱ�ȭ
	std::cout << "ptrVar�� ����Ű�� ��: " << (ptrVar ? *ptrVar : 0) << std::endl; // nullptr üũ �� �� ���

	int* intPtr;
	intPtr = new int;
	*intPtr = 10;
	std::cout << "intPtr�� ����Ű�� ��: " << *intPtr << std::endl; // �� ���
	delete intPtr; // ���� �޸� ����
	intPtr = nullptr; // ������ �ʱ�ȭ
	std::cout << "intPtr�� ����Ű�� ��: " << (intPtr ? *intPtr : 0) << std::endl; // nullptr üũ �� �� ���

	int* intArrayPtr;
	intArrayPtr = new int[4];
	*intArrayPtr = 10;
	*(intArrayPtr + 1) = 20;
	intArrayPtr[2] = 30;

	std::cout << "intArrayPtr[1] = " << intArrayPtr[1] << std::endl;

	return 0;
}