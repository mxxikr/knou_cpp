#include <iostream>
#include "Counter.h"

int main1() {
	Counter cnt; // �ʱ�ȭ�� ���� ���� ���·� value ������ ��� ������ �ִ� ��ü ����

	Counter cntArr[4]; // OK
	Counter* pt = new Counter[10]; // OK -> ī���� ��ü�� �������� 10�� ����

	std::cout << "cnt.value = " << cnt.getValue() << std::endl; // �ʱ�ȭ���� ���� �� ���
	std::cout << "cntArr[0].value = " << cntArr[0].getValue() << std::endl; // �ʱ�ȭ���� ���� �� ���
	std::cout << "pt[0].value = " << pt[0].getValue() << std::endl; // �ʱ�ȭ���� ���� �� ���
	return 0;
}