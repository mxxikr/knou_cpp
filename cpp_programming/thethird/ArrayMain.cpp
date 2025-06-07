#include <iostream>

using namespace std;

int main6() {
	float fArray[4]; // 크기 4인 실수형 배열 선언
	int i = 0;
	fArray[i] = 10.0f; // 배열의 첫 번째 요소에 10.0f 할당
	cin >> fArray[1] >> fArray[2] >> fArray[3]; // 사용자로부터 나머지 요소 입력 받기
	cout << fArray[1] * fArray[2] << endl; // 두 번째와 세 번째 요소의 곱 출력

	int Arr2D[4][3]; // 4행 3열의 2차원 배열 선언

	int a[5] = { 1, 2, 3, 4, 5 }; // ‘=’는 생략할 수 있음
	int b[5] = { 1, 2, 3 }; // b[3]와 b[4]는 0으로 초기화됨
	int c[] = { 1, 2, 3, 4, 5 }; // 배열의 크기는 5임
	int d[2][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };// 2차원 배열의 초기화
	cout << "d[0][0] = " << d[0][0] << endl;
	cout << "d[1][3] = " << d[1][3] << endl;
	cout << "d[0][2] = " << d[0][2] << endl;
	cout << "d[1][1] = " << d[1][1] << endl;

	return 0;
}