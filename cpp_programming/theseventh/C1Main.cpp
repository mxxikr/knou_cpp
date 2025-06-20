#include <iostream>
#include "Complex1.h"
using namespace std;

int main2()
{
	Complex1 c1(1, 2); // Complex1 按眉 积己
	Complex1 c2(2, 3); // Complex1 按眉 积己
	Complex1 c3 = c1.add(c2); // c1 + c2 楷魂
	c1.display(); // 1 + 2j
    cout << " + "; 
	c2.display(); // 2 + 3j
    cout << " = "; 
	c3.display(); // 3 + 5j
    cout << endl;

    c3 = c1.mul(10.0); // 宫矫利 屈 函券 -> c3 = c1.mul(Complex1(10.0, 0.0));
	c1.display(); // 1 + 2j
    cout << " * 10 = ";
	c3.display(); // 10 + 20j
    cout << endl;

    return 0;
}