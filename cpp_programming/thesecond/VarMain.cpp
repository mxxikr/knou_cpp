#include <iostream>
using namespace std;

// ��� ���� ��� ���α׷�
int main1()
{
	int total = 0;
	int korScore, mathScore; // ����� ���� ������ ������ ���� ����
	cin >> korScore >> mathScore; // ����ڷκ��� ����� ���� ������ �Է¹���
	float avrScore = (korScore + mathScore) / 2.0f; // 2.0f�� ����Ͽ� �Ǽ��� ������

	cout << "��� ������ " << avrScore << "�Դϴ�." << endl;
	return 0;
}