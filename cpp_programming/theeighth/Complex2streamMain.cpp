#include <iostream>
#include "Complex2stream.h"
using namespace std;

int main()
{
    // ���Ҽ� ��ü 2�� ����
    Complex2stream a(10, 20);    
    Complex2stream b(5, -3);

    // ��Ʈ�� ��� �����ε� ���п� ���Ҽ� ��ü�� �ٷ� ��� ����
    cout << a << " + " << b << " = " << a + b << endl;

    return 0;
}