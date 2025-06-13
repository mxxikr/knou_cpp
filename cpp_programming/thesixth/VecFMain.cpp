#include <iostream>
using namespace std;
#include "VecF.h"

int main4() {
	float a[3] = { 1, 2, 3 }; // 1, 2, 3�� �����ϴ� �迭
	VecF v1(3, a); // 1, 2, 3�� �����ϴ� ���� ����
	VecF v2(v1); // v1�� �����Ͽ� v2�� ����
	v1.print();
	cout << endl;
	v2.print();
	cout << endl;

	float c[3] = { 1, 2, 3 };
	float d[3] = { 2, 4, 6 };
	VecF v3(3, c);
	VecF v4(3, d);
	VecF v5(v3.add(v4)); // ��ȯ ��ü�� v5�� ����� �� ���ŵ�
	v3.print();
	cout << endl;

	v4.print();
	cout << endl;

	v5.print();
	cout << endl;

	VecF v6(3), v7(3);
	v6.print();
	cout << endl;
	v7.print();
	cout << endl;
	
	// lvalue ������ rvalue ������ ���
	VecF& vLRef = v6; // lvalue ������ lvalue�� ������
	vLRef.print();
	cout << endl;
	//int& a = 10; // ����: lvalue ������ rvalue�� ������ �� ����
	
	const int& b = 20; // ��� lvalue �����δ� rvalue�� ������ �� ����
	cout << b << endl;

	int&& e = 30; // rvalue�� rvalue ������ ������ �� ����
	cout << e << endl;

	VecF&& vRRef1 = v6.add(v2); // �Լ��� ��ȯ ��ü�� rvalue��
	//VecF&& vRRef2 = v7; // ����: rvalue ������ lvalue�� ������ �� ����
	vRRef1.print();
	cout << endl;
	return 0;
}