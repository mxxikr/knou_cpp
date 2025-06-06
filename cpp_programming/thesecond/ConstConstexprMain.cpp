#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
};

void f(int x) {
	constexpr int a = fac(4); // �������� �� ���
	int b = fac(x); // ���� �� ���
	cout << "fac(4) = " << a << endl;
	cout << "fac(x) = " << b << endl;
};

int main4() {
	const double PI{ 3.14159 }; // ������ ����
	int a;
	std::cin >> a;
	const int b = 20;
	const int C1 = a; // cin�� ���� �Էµ� a�� ������ �ʱ�ȭ
	// constexpr int C2 = a + 10; // ����: ������ �ÿ� a�� ���� �� �� ����
	constexpr int C3 = b + 100; // b + 100�� ������ �ÿ� ����� �� ����
	// constexpr int C4 = C1 * 2; // ����: ������ �ÿ� C1�� ���� �� �� ����
	cout << "PI = " << PI << endl;
	cout << "C1 = " << C1 << endl;
	cout << "C3 = " << C3 << endl;

	int x = 3;
	f(x);

	return 0;
}