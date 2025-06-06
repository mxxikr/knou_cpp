#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
};

void f(int x) {
	constexpr int a = fac(4); // 컴파일할 때 계산
	int b = fac(x); // 실행 중 계산
	cout << "fac(4) = " << a << endl;
	cout << "fac(x) = " << b << endl;
};

int main4() {
	const double PI{ 3.14159 }; // 원주율 정의
	int a;
	std::cin >> a;
	const int b = 20;
	const int C1 = a; // cin을 통해 입력된 a의 값으로 초기화
	// constexpr int C2 = a + 10; // 오류: 컴파일 시에 a의 값을 알 수 없음
	constexpr int C3 = b + 100; // b + 100을 컴파일 시에 계산할 수 있음
	// constexpr int C4 = C1 * 2; // 오류: 컴파일 시에 C1의 값을 알 수 없음
	cout << "PI = " << PI << endl;
	cout << "C1 = " << C1 << endl;
	cout << "C3 = " << C3 << endl;

	int x = 3;
	f(x);

	return 0;
}