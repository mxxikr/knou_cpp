#include <iostream>

using namespace std;

int main3() {
	extern int a; // �ٸ� �ҽ� ���Ͽ��� �����ϴ� ���� ��� = ScopeMain.cpp �� a ����
	static int b{ 50 }; // �ش� �ҽ� ���Ͽ����� ��� ���� ScopeMain.cpp b ���� != Scope2Main.cpp b ����
	cout << "a = " << a << ", b = " << b << endl; // a�� ScopeMain.cpp���� ���ǵ� ����, b�� �� ���Ͽ��� ���ǵ� ����
	return 0;
}