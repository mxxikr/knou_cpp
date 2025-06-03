#include <iostream>
using namespace std; // namespace std를 사용하여 std:: 접두사를 생략

namespace NameSpace1 { int a = 10; } // 명칭 공간의 이름 : NameSpace1
namespace NameSpace2 { int a = 20; } // 명칭 공간의 이름 : NameSpace2
int a = 30; // 전역 변수 a 선언 및 초기화
namespace NameSpace1 { int b = 50; } 

int main() {
	int a = 40; // 지역 변수 a 선언 및 초기화
	std::cout << NameSpace1::a << std::endl; // NameSpace1의 a 출력
	std::cout << NameSpace2::a << std::endl; // NameSpace2의 a 출력
	cout << ::a << std::endl; // 전역 변수 a 출력
	cout << a << std::endl; // 지역 변수 a 출력
	cout << NameSpace1::b << std::endl; // NameSpace1의 b 출력

	return 0;
}