#include <iostream>
#include "Pencils.h"
using namespace std;

int main1()
{
    Pencils p1(5, 7);
    Pencils p2(23);

    p1.display();           // 5타 7자루
    (++p1).display();       // 5타 8자루
    p1.display();           // 5타 8자루
    cout << endl;
    p2.display();           // 1타 11자루
    p1 = p2++;
    p1.display();           // 1타 11자루
    p2.display();           // 2타
    return 0;
}