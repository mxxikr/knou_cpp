#include <iostream>

using namespace std;

int main6() {
	float fArray[4]; // ũ�� 4�� �Ǽ��� �迭 ����
	int i = 0;
	fArray[i] = 10.0f; // �迭�� ù ��° ��ҿ� 10.0f �Ҵ�
	cin >> fArray[1] >> fArray[2] >> fArray[3]; // ����ڷκ��� ������ ��� �Է� �ޱ�
	cout << fArray[1] * fArray[2] << endl; // �� ��°�� �� ��° ����� �� ���

	int Arr2D[4][3]; // 4�� 3���� 2���� �迭 ����

	int a[5] = { 1, 2, 3, 4, 5 }; // ��=���� ������ �� ����
	int b[5] = { 1, 2, 3 }; // b[3]�� b[4]�� 0���� �ʱ�ȭ��
	int c[] = { 1, 2, 3, 4, 5 }; // �迭�� ũ��� 5��
	int d[2][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };// 2���� �迭�� �ʱ�ȭ
	cout << "d[0][0] = " << d[0][0] << endl;
	cout << "d[1][3] = " << d[1][3] << endl;
	cout << "d[0][2] = " << d[0][2] << endl;
	cout << "d[1][1] = " << d[1][1] << endl;

	return 0;
}