#include <iostream>

using namespace std;

int main() {
	unsigned char x = 0b00011101; // 29
	unsigned char y = x << 2;
	cout << "x = " << (int)x << endl; // x�� ���� ������ ���
	cout << "y = " << (int)y << endl; // y�� ���� ������ ���

	char z = 0b10010100; // -108
	char w = z >> 2;
	cout << "z = " << (int)z << endl; // z�� ���� ������ ���
	cout << "w = " << (int)w << endl; // w�� ���� ������ ���

	return 0;
}