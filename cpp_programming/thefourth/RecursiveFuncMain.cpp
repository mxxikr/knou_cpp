#include <iostream>

using namespace std;

// ��� �Լ��� �̿��Ͽ� ���丮���� ����ϴ� �Լ�
int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main3()
{
	int number;

	cout << "���丮���� ����� ���ڸ� �Է��ϼ���: ";
	cin >> number;

	if (number < 0) {
		cout << "������ ���丮���� ���ǵ��� �ʽ��ϴ�." << endl;
	} else {
		int result = factorial(number);
		cout << number << "�� ���丮���� " << result << "�Դϴ�." << endl;
	}

	return 0;
}