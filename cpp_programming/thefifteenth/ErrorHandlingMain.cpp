#include <iostream>
#include <cstdlib>   
#include <new>       

using namespace std;

// ��ȭ��� �Լ�
double hmean(double a, double b)
{
	if (a == -b) // a�� b�� ���� ���� ������ ��
    {
        cout << "�����⸦ �� �� �����ϴ�." << endl;
        exit(EXIT_FAILURE);  // ���α׷� ���� ����
    }
	return 2.0 * a * b / (a + b); // ��ȭ��� ���
}

void test_hmean()
{
    double x, y;
    cout << "[��ȭ��� ���]" << endl;
    cout << "�� �Ǽ��� �Է�: ";
    cin >> x >> y;
    double result = hmean(x, y);  // ������ ���⼭ ����
    cout << "��ȭ���: " << result << endl;
}

void test_memory()
{
    cout << "\n[��뷮 �޸� �Ҵ� �׽�Ʈ]" << endl;
    cout << "�ʿ��� �迭 ũ�� �Է� : ";
    size_t size;
    cin >> size;
    int* p = new(nothrow) int[size]; // nothrow�� ���� ����
    if (!p) {
        cerr << "�޸� �Ҵ� ����" << endl;
        exit(EXIT_FAILURE);   // ���� ����
    }
    cout << "�޸� �Ҵ� ����!" << endl;
    delete[] p;
}

int main1()
{
    // ��ȭ��� ���� ����
    test_hmean();

    // �޸� �Ҵ� ���� ����
    test_memory();

    cout << "���α׷� ���� ����" << endl;
    return 0;
}