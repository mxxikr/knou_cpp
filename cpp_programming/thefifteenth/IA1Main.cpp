#include <iostream>
#include "IntArray1.h"
using namespace std;

int main4()
{
	Array arr(10);
    try {
        for (int i = 0; i < 10; i++)
            arr[i] = i;
         arr[10] = 10; // �ε��� ������ ����� ����
    }
    catch (Array::BadIndex e) {
        cerr << "�ε��� ���� ���� : " << e.wrongIndex << endl;
    }
    cout << arr << endl;
    return 0;
}