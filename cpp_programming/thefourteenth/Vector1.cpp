#include <iostream>
#include <vector>
using namespace std;

int main1()
{
    vector<int> intVec(5); // ���� ��ü ����

	for (int i = 0; i < intVec.size(); i++) { // ���Ϳ� ������ ����
        intVec[i] = i + 1;
    }
	cout << "������ ���� ũ�� : " << intVec.size() << endl; // ������ ���� ũ�� ���
	cout << "������ ������ ũ�� : " << intVec.capacity() << endl; // ������ ������ ũ�� ���
    cout << "����� ������ : ";
    for (int i = 0; i < intVec.size(); i++) { 
		cout << intVec[i] << " "; // ���Ϳ� ����� ������ ���
    }
    cout << endl << endl;

    cout << "1���� ������ push_back" << endl;
	intVec.push_back(11); // ���Ϳ� ������ �߰�
    cout << "������ ���� ũ�� : " << intVec.size() << endl;
    cout << "������ ������ ũ�� : " << intVec.capacity() << endl;
    cout << "����� ������ : ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";
    cout << endl << endl;

    cout << "5���� ������ push_back" << endl;
    for (int i = 1; i <= 5; i++)
		intVec.push_back(i + 11); // ���Ϳ� 5���� ������ �߰�
    cout << "������ ���� ũ�� : " << intVec.size() << endl;
    cout << "������ ������ ũ�� : " << intVec.capacity() << endl;
    cout << "����� ������ : ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";

	cout << endl << endl << "3���� ������ pop_back" << endl; // ���Ϳ��� 3���� ������ ����
    for (int i = 0; i < 3; i++) {
        intVec.pop_back();
    }
    cout << "������ ���� ũ�� : " << intVec.size() << endl;
    cout << "������ ������ ũ�� : " << intVec.capacity() << endl;
    cout << "����� ������ : ";
    for (int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }
    cout << endl;

    return 0;
}