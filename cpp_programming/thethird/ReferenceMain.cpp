#include <iostream>

int main() {
	int x{10};
	const int& xRef = x;
	std::cout << xRef << std::endl; // x의 값을 읽어 출력함
	// xRef += 10; // 오류: const 참조로 값을 수정할 수 없음
}