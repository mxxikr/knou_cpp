#include <iostream>
#include "Drvd1.h"
using namespace std;

int main() {
    Drvd1 d1;
     //d1.a = 1; // ����(private ���)
     //d1.b = 2; // ����(protected ���)
     d1.c = 3; // ����(protected ���) 

    d1.set(10, 20, 30); // �� ����
    d1.printbc(); // b�� c ���

    cout << ", sum: " << d1.sum() << endl;

    return 0;
}