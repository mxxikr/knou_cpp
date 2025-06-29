#include <iostream>
#include "StackInt.h"
#include "StackFloat.h"
using namespace std;

int main1() {
    StackInt si;
    StackFloat sf;
    
    // First In Last Out (FILO) ������ ����
    si.push(10); // 10�� ���ÿ� Ǫ��
    si.push(20); // 20�� ���ÿ� Ǫ��
    cout << "Int pop: " << si.pop() << endl; // 20
    cout << "Int pop: " << si.pop() << endl; // 10

    sf.push(1.5f); // 1.5f�� ���ÿ� Ǫ��
    sf.push(2.5f); // 2.5f�� ���ÿ� Ǫ��
    cout << "Float pop: " << sf.pop() << endl; // 2.5
    cout << "Float pop: " << sf.pop() << endl; // 1.5
    return 0;
}