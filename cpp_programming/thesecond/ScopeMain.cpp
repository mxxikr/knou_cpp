#include <iostream>
using namespace std;

int a = 100; // ����� ���� ���α׷��� ��ü �������� ��� ���� - �� ��������(non-local variable)
static int b{ 10 }; // ����� ���� �Ҽ� ������ ��ü �������� ��� ���� - �� ��������(non-local variable)

int main2() {
	int f(); {
		int c{ 20 }, d{ 30 }; // ����� ���� �Ҽ� ����� ��ü �������� ��� ���� - ��������(local variable)
		{
			int d{ 40 }; // ����� ���� �Ҽ� ����� ��ü �������� ��� ���� - ���� ����(local variable), �̸� ������
			int e{ 50 }; // ����� ���� �Ҽ� ����� ��ü �������� ��� ���� - ���� ����(local variable)
			cout << "c = " << c << ", d = " << d << ", e = " << e << endl; // c, d, e�� f() ��� ������ ��ȿ
		}
		cout << "c = " << c << ", d = " << d << endl; // c�� d�� f() ��� ������ ��ȿ
	}

	cout << "a = " << a << ", b = " << b << endl;
	// cout << "c = " << c << ", d = " << d << endl; // c�� d�� f() ��� �������� ��ȿ�ϹǷ� ���� �߻�
	return 0;
}