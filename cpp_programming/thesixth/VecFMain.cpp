#include <iostream>
using namespace std;
#include "VecF.h"

int main4() {
	float a[3] = { 1, 2, 3 }; // 1, 2, 3을 저장하는 배열
	VecF v1(3, a); // 1, 2, 3을 저장하는 벡터 생성
	VecF v2(v1); // v1을 복사하여 v2를 만듦
	v1.print();
	cout << endl;
	v2.print();
	cout << endl;

	float c[3] = { 1, 2, 3 };
	float d[3] = { 2, 4, 6 };
	VecF v3(3, c);
	VecF v4(3, d);
	VecF v5(v3.add(v4)); // 반환 객체는 v5에 복사된 후 제거됨
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
	
	// lvalue 참조와 rvalue 참조의 사용
	VecF& vLRef = v6; // lvalue 참조로 lvalue를 참조함
	vLRef.print();
	cout << endl;
	//int& a = 10; // 오류: lvalue 참조로 rvalue를 참조할 수 없음
	
	const int& b = 20; // 상수 lvalue 참조로는 rvalue를 참조할 수 있음
	cout << b << endl;

	int&& e = 30; // rvalue는 rvalue 참조로 참조할 수 있음
	cout << e << endl;

	VecF&& vRRef1 = v6.add(v2); // 함수의 반환 객체는 rvalue임
	//VecF&& vRRef2 = v7; // 오류: rvalue 참조로 lvalue를 참조할 수 없음
	vRRef1.print();
	cout << endl;
	return 0;
}