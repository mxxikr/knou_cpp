#include <iostream>

using namespace std;

int main() {
	unsigned char x = 0b00011101; // 29
	unsigned char y = x << 2;
	cout << "x = " << (int)x << endl; // x의 값을 정수로 출력
	cout << "y = " << (int)y << endl; // y의 값을 정수로 출력

	char z = 0b10010100; // -108
	char w = z >> 2;
	cout << "z = " << (int)z << endl; // z의 값을 정수로 출력
	cout << "w = " << (int)w << endl; // w의 값을 정수로 출력

	return 0;
}