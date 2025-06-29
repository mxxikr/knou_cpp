#include <iostream>
#include "StackInt.h"
#include "StackFloat.h"
using namespace std;

int main1() {
    StackInt si;
    StackFloat sf;
    
    // First In Last Out (FILO) 구조로 동작
    si.push(10); // 10을 스택에 푸시
    si.push(20); // 20을 스택에 푸시
    cout << "Int pop: " << si.pop() << endl; // 20
    cout << "Int pop: " << si.pop() << endl; // 10

    sf.push(1.5f); // 1.5f를 스택에 푸시
    sf.push(2.5f); // 2.5f를 스택에 푸시
    cout << "Float pop: " << sf.pop() << endl; // 2.5
    cout << "Float pop: " << sf.pop() << endl; // 1.5
    return 0;
}