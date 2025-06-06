#include <iostream>
using namespace std;

int a = 100; // 선언된 이후 프로그램의 전체 영역에서 사용 가능 - 비 지역변수(non-local variable)
static int b{ 10 }; // 선언된 이후 소속 파일의 전체 영역에서 사용 가능 - 비 지역변수(non-local variable)

int main2() {
	int f(); {
		int c{ 20 }, d{ 30 }; // 선언된 이후 소속 블록의 전체 영역에서 사용 가능 - 지역변수(local variable)
		{
			int d{ 40 }; // 선언된 이후 소속 블록의 전체 영역에서 사용 가능 - 지역 변수(local variable), 이름 가리기
			int e{ 50 }; // 선언된 이후 소속 블록의 전체 영역에서 사용 가능 - 지역 변수(local variable)
			cout << "c = " << c << ", d = " << d << ", e = " << e << endl; // c, d, e는 f() 블록 내에서 유효
		}
		cout << "c = " << c << ", d = " << d << endl; // c와 d는 f() 블록 내에서 유효
	}

	cout << "a = " << a << ", b = " << b << endl;
	// cout << "c = " << c << ", d = " << d << endl; // c와 d는 f() 블록 내에서만 유효하므로 오류 발생
	return 0;
}