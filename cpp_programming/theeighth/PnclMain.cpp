#include <iostream>
#include "Pencils.h"
using namespace std;

int main1()
{
    Pencils p1(5, 7);
    Pencils p2(23);

    p1.display();           // 5Ÿ 7�ڷ�
    (++p1).display();       // 5Ÿ 8�ڷ�
    p1.display();           // 5Ÿ 8�ڷ�
    cout << endl;
    p2.display();           // 1Ÿ 11�ڷ�
    p1 = p2++;
    p1.display();           // 1Ÿ 11�ڷ�
    p2.display();           // 2Ÿ
    return 0;
}