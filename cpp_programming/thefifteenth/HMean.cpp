#include <iostream>
using namespace std;

double hmean2(double a, double b) // ��ȭ���
{
    if (a == -b) // ���� ����
        throw "��ȭ����� ����� �� �����ϴ�!";
    return 2.0 * a * b / (a + b);
}

int main2()
{
    double x, y, z;
	char cFlag = 'y'; // �ݺ� ���θ� �����ϴ� ����
	while (cFlag != 'n') // 'n'�� �Էµ� ������ �ݺ�
    {
        cout << "\n�� ���� �Է��Ͻÿ� : ";
		cin >> x >> y; // �� �� �Է�
        try { // ���� �߻� ���ɼ��� �ִ� �ڵ�
			z = hmean2(x, y); // ��ȭ��� ���
            cout << "��ȭ��� = " << z << endl;
        }
        catch (const char* s) { // ���� ó��
			cout << s << endl; // ���� �޽��� ���
        }
        cout << "��� �ұ��? (y/n) : ";
        cin >> cFlag;
    }
    return 0;
}