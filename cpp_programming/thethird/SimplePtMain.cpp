#include <iostream>
using namespace std;

int main8()
{
	int a = 10;
	int* ptr;

	ptr = &a; // ptr�� a�� �ּҸ� �ִ´�.
	cout << "ptr�� ����Ű�� �� : " << *ptr << endl; // ��µǴ� �� : 10
	*ptr = 20;
	cout << "���� a�� �� : " << a << endl; // ��µǴ� �� : 20
	return 0;
}