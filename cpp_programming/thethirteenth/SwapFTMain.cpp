#include <iostream>
#include "SwapFT.h"
#include "MyString.h"
using namespace std;

int main5()
{
    int x = 10, y = 20; // ������ ���� ���� �� �ʱ�ȭ
    cout << "x = " << x << ", y = " << y << endl; 
    cout << "�� ��ȯ �� -> ";
    swapFT(x, y); // swapFT �Լ��� ����Ͽ� x�� y�� �� ��ȯ
    cout << "x = " << x << ", y = " << y << endl << endl;

    MyString s1("KNOU"), s2("CS"); // MyString ��ü s1�� s2 ����
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    swapFT(s1, s2); // swapFT �Լ��� ����Ͽ� s1�� s2�� �� ��ȯ
    cout << "�� ��ȯ �� -> ";
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    return 0;
}