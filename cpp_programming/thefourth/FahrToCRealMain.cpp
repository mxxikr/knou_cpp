#include <iostream>
using namespace std;

float FahrToCReal(float fahr); // �Լ��� ����

int main2()
{
    float fTemp, cTemp;

    cout << "ȭ���µ� : ";
    cin >> fTemp;
    cTemp = FahrToCReal(fTemp); // �Լ� ȣ��
    cout << "---> �����µ� : " << cTemp << endl;
    return 0;
}

float FahrToCReal(float fahr)
{
    return (fahr - 32) * 5 / 9;
}