#include <iostream>
#include <vector>
using namespace std;

int main2()
{
	vector<int> intVec(5); // ������ ũ�⸦ 5�� �ʱ�ȭ
	for (int i = 0; i < intVec.size(); i++) // ������ ũ�⸸ŭ �ݺ�
		intVec[i] = i + 1; // ������ �� ��ҿ� 1���� 5������ ���� ����

	vector<int>::iterator it = intVec.begin(); // ������ ���� ��ġ�� ����Ű�� �ݺ��� ����
    cout << "����� ������ : ";
	for (; it < intVec.end(); it++) // �ݺ��ڸ� ����Ͽ� ������ ������ ��ȸ
		cout << *it << " "; // �� ��Ҹ� ���
    cout << endl;

	it = intVec.begin(); // �ݺ��ڸ� ������ ���� ��ġ�� �ٽ� �ʱ�ȭ
    cout << "3��° ������ : ";
	cout << *(it + 2) << endl; // �ݺ��ڸ� ����Ͽ� 3��° �����͸� ���
    return 0;
}