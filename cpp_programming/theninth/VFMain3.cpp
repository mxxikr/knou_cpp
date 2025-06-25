#include <iostream>
#include "VecF.h"
using namespace std;

int main1() {
	float a[3] = { 1, 2, 3 };
    float b[3] = { 2, 4, 6 };
    VecF v1(3, a);
    VecF v2(3, b);
    VecF v3(3);
    cout << v1 << " + " << v2 << " = " << v3 << endl;

    // ���� ������ (l-value�� ����� ���� ����)
    v3 = v1; // ���� ���� ������ ȣ��
    cout << v3 << endl;

    // �̵� ���� ������ (r-value�� ����� �̵�)
    v3 = v1.add(v2); // v1�� v2�� ���� ����� ���� ����� �ӽ� ��ü�� ��ȯ
    cout << v1 << " + " << v2 << " = " << v3 << endl;

    // ���� ��ȯ
    swapVecF(v1, v2);
    cout << v1 << " + " << v2 << " = " << v3 << endl;

    return 0;
}