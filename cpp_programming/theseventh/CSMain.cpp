#include <iostream>
#include "CharStack.h"
using namespace std;

int main1()
{
    CharStack chStack; // 20���� ���ڸ� ������ �� �ִ� ����
    char str[20]; // �ִ� 20���� ���ڸ� ������ �� �ִ� ���ڿ� �迭

    cout << "���� �ܾ �Է��Ͻÿ� : ";
    cin >> str; // ����ڷκ��� ���ڿ� �Է� �ޱ�

    char* pt = str; // �����ͷ� ���ڿ� ���� ��ġ�� ����Ŵ
    while (*pt)     // ���ڿ��� ���� �ƴϸ� �ݺ�
    {
        chStack.push(*(pt++)); // ���ÿ� ���ڸ� ����
    }

    cout << "���� �ܾ� ��� : ";
    while (!chStack.chkEmpty()) // ������ ��� ���� ������ �ݺ�
    {
        cout << chStack.pop(); // ���ÿ��� ������ ���ڸ� ���
    }
    cout << endl;
    return 0;
}
