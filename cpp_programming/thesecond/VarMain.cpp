#include <iostream>
using namespace std;

// 평균 점수 계산 프로그램
int main1()
{
	int total = 0;
	int korScore, mathScore; // 국어와 수학 점수를 저장할 변수 선언
	cin >> korScore >> mathScore; // 사용자로부터 국어와 수학 점수를 입력받음
	float avrScore = (korScore + mathScore) / 2.0f; // 2.0f를 사용하여 실수로 나누기

	cout << "평균 점수는 " << avrScore << "입니다." << endl;
	return 0;
}