#include <iostream>

using namespace std;

int main1() {
	int score; // ������ ������ ����
	char grade; // ������ ������ ����

	cout << "������ �Է��ϼ���: ";
	cin >> score;

	switch (score / 10) {
		case 10: // score�� 100�� ���
		case 9: grade = 'A'; // score�� 90~99�� ���
			break;
		case 8: grade = 'B'; // score�� 80~89�� ���
			break;
		case 7: grade = 'C'; // score�� 70~79�� ���
			break;
		case 6: grade = 'D'; // score�� 60~69�� ���
			break;
		default: grade = 'F'; // score�� 59 ������ ���
	}

	cout << "������ " << grade << "�Դϴ�." << endl;
	return 0;
}