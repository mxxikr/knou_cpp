#include <iostream>
using namespace std;

// ȭ���µ��� �����µ��� ��ȯ�ϴ� �Լ�
// �Ű����� float fahr: ȭ���µ�
// ��ȯ�� �����µ�(float)
float FahrToC(float fahr)
{
    return (fahr - 32) * 5 / 9; // ȭ���µ��� �����µ��� ��ȯ�ϴ� ����
} 

int main1()
{
    float fTemp, cTemp; // ȭ���µ��� �����µ��� ������ ���� ����
    cout << "ȭ���µ� : "; // ����ڿ��� ȭ���µ��� �Է¹ޱ� ���� �޽��� ���
    cin >> fTemp; // ����ڷκ��� ȭ���µ� �Է� �ޱ�
    cTemp = FahrToC(fTemp); // �Լ� ȣ��
    cout << "---> �����µ� : " << cTemp << endl; // �����µ� ���
    return 0;
}