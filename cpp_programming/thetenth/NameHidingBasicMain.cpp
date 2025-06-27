#include <iostream>
using namespace std;

void f(int x) {
    cout << "f(int x) --> " << x << endl;
}

void f(double x) {
    cout << "f(double x) --> " << x << endl;
}

int main4() {
    f(10);     // f(int x) --> 10
    f(20.0);   // f(double x) --> 20

    return 0;
}