#include <iostream>

using namespace std;

int main3() {
	extern int a; // 다른 소스 파일에서 존재하는 변수 사용 = ScopeMain.cpp 의 a 변수
	static int b{ 50 }; // 해당 소스 파일에서만 사용 가능 ScopeMain.cpp b 변수 != Scope2Main.cpp b 변수
	cout << "a = " << a << ", b = " << b << endl; // a는 ScopeMain.cpp에서 정의된 변수, b는 이 파일에서 정의된 변수
	return 0;
}