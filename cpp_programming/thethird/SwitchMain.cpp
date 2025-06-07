#include <iostream>

using namespace std;

int main1() {
	int score; // 점수를 저장할 변수
	char grade; // 학점을 저장할 변수

	cout << "점수를 입력하세요: ";
	cin >> score;

	switch (score / 10) {
		case 10: // score가 100인 경우
		case 9: grade = 'A'; // score가 90~99인 경우
			break;
		case 8: grade = 'B'; // score가 80~89인 경우
			break;
		case 7: grade = 'C'; // score가 70~79인 경우
			break;
		case 6: grade = 'D'; // score가 60~69인 경우
			break;
		default: grade = 'F'; // score가 59 이하인 경우
	}

	cout << "학점은 " << grade << "입니다." << endl;
	return 0;
}