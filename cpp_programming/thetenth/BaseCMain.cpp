#include <iostream>
#include "Drvd1.h"
using namespace std;

int main3() {
    Drvd1 d1;
    //d1.a = 1; // ����(private ���)
    //d1.b = 2; // ����(protected ���)
	//d1.c = 3; // ����(protected ���)

    //d1.set(10, 20, 30); // �� ���� (protected)
    d1.printbc(); // b�� c ��� (public)

    cout << ", sum: " << d1.sum() << endl;

    return 0;
}