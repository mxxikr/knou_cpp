#include <iostream>

using namespace std;

// 재귀 함수를 이용하여 팩토리얼을 계산하는 함수
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

	cout << "팩토리얼을 계산할 숫자를 입력하세요: ";
	cin >> number;

	if (number < 0) {
		cout << "음수의 팩토리얼은 정의되지 않습니다." << endl;
	} else {
		int result = factorial(number);
		cout << number << "의 팩토리얼은 " << result << "입니다." << endl;
	}

	return 0;
}