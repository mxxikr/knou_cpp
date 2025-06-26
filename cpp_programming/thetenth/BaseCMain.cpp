#include <iostream>
#include "Drvd1.h"
using namespace std;

int main() {
    Drvd1 d1;
     //d1.a = 1; // 에러(private 멤버)
     //d1.b = 2; // 에러(protected 멤버)
     d1.c = 3; // 에러(protected 멤버) 

    d1.set(10, 20, 30); // 값 설정
    d1.printbc(); // b와 c 출력

    cout << ", sum: " << d1.sum() << endl;

    return 0;
}