#include <iostream>
#include "SortFT.h"
#include "MyString.h"
using namespace std;

int main()
{
    int x[10] = { 6, 0, 3, 1, 2, 9, 4, 5, 7, 8 }; // ������ �迭 ���� �� �ʱ�ȭ
    sortFT(x, 10); // sortFT �Լ��� ����Ͽ� �迭 x ����
    for (auto i : x) // �迭 x�� �� ��� ���
        cout << i << " ";
    cout << endl;

    return 0;
}