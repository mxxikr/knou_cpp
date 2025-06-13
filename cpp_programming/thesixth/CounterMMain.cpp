#include <iostream>
#include "CounterM.h"

int main2() {
	CounterM cnt1(999); // �����ڿ� �ش��ϴ� ���·� ��ü �����ؾ� ��
	//CounterM cnt2; // ����

	cnt1.count(); // value �� ���� ��Ŵ
	std::cout << "cnt1: " << cnt1.getValue() << std::endl;
	
	CounterM cnt2(-100); // maxValue -100, value 0
	cnt2.count(); // value �� ���� ��Ŵ
	std::cout << "cnt2: " << cnt2.getValue() << std::endl;

	//CounterM cntMArr1[3]; // ����
	CounterM cntMArr2[3] = { CounterM(99), CounterM(99), CounterM(999) }; // OK -> �μ� ������ �ʱ� �� ����
	cntMArr2[0].count(); // value �� ���� ��Ŵ
	std::cout << "cntMArr2[0]: " << cntMArr2[0].getValue() << std::endl;
	cntMArr2[1].count(); // value �� ���� ��Ŵ
	std::cout << "cntMArr2[1]: " << cntMArr2[1].getValue() << std::endl;
	cntMArr2[2].count(); // value �� ���� ��Ŵ
	std::cout << "cntMArr2[2]: " << cntMArr2[2].getValue() << std::endl;
	//CounterM* pt = new CounterM[10]; // ����

	return 0;
}