#include <iostream>
#include <cmath> // pow, trunc �Լ� ����� ���� �߰�

using namespace std;

double Round(double x, int d = 0)
{
    double a = x >= 0 ? 0.5 : -0.5; // ����� 0.5, ������ -0.5�� ����
    double pow10 = pow(10, d); // 10�� d���� ���
    return trunc(x * pow10 + a) / pow10; // x�� 0.5 �Ǵ� -0.5�� ���� ��, d�ڸ����� �ݿø��Ͽ� ��ȯ
}

void f(int x, int y = 10, int z = 20) {
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl; // �μ� ���
}

int main6()
{
    char str1[10], str2[10];
    cout << "���ڿ��� �Է��ϼ���(��ǥ�� ����): ";
    cin.getline(str1, 10, ','); // ','���� �а� '\0'�� ����
    cin.getline(str2, 10);      // '\n'���� �а� '\0'�� ����

    cout << "str1: [" << str1 << "]" << endl;
    cout << "str2: [" << str2 << "]" << endl;
    
    cin.ignore(1000, '\n'); // �Է� ���ۿ� ���� ���ڵ��� ��� ����

    double a;
    cout << "���� �Է��ϼ���: ";
    cin >> a;
    cout << "�ݿø� --> " << Round(a) << endl;
    cout << "          " << Round(a, 1) << endl;
    cout << "          " << Round(a, 2) << endl;
    cout << "          " << Round(a, 3) << endl << endl;

    f(5);              // x=5, y=10, z=20
    f(5, 100);         // x=5, y=100, z=20
    f(5, 100, 200);    // x=5, y=100, z=200
    // f(5, ,300);     // ������ ���� �߻� - �߰� �μ� ���� �Ұ�

    return 0;
}