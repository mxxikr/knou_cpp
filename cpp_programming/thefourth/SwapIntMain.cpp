#include <iostream>
using namespace std;
void SwapValues(int& x, int& y); // ���� ����

int main4()
{
    int a, b; // �� ������ ������ ���� ����

    cout << "�� ���� �Է��Ͻÿ� : ";
    cin >> a >> b;
    if (a < b) SwapValues(a, b); // ������ �ٲ� a�� ū ���� ����
    cout << "ū �� = " << a << " ���� �� = " << b << endl;
    return 0;
}

// x�� y�� ���� ���� �ٲٴ� �Լ�
void SwapValues(int& x, int& y) // ���� �Ű����� ��� 
{
    int temp = x; // x�� ���� �ӽ� ������ ����
    x = y; // y�� ���� x�� ����
    y = temp; // �ӽ� ������ ����� ���� y�� ����
}