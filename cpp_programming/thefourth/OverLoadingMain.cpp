#include <iostream>
using namespace std;

int b = 100; // ���� ���� b

void f(int a) {
    cout << "int Ÿ���� �Ű����� a�� �޾Ƽ� a * a�� ��� : " << a * a << endl;

}

void f(int a, int b) {
    cout << "int Ÿ���� �Ű����� a�� b�� �޾Ƽ� a * b�� ��� : " << a * b << endl;
}

void g(int a)
{
    cout << "int Ÿ���� �Ű����� a�� �޾Ƽ� a * a�� ��� : " << a * a << endl;
}

void g(int a, int b = 100)
{
    cout << "int Ÿ���� �Ű����� a�� b�� �޾Ƽ� a * b�� ��� : " << a * b << endl;
}

void h(int a)
{
    cout << "int Ÿ���� �Ű����� a�� �޾Ƽ� a * a�� ��� : " << a * a << endl;
}

void h(float a)
{
    cout << "float Ÿ���� �Ű����� a�� �޾Ƽ� a * b�� ��� : " << a * b << endl;
}

int main()
{
    f(10);
    f(10, 20);
    g(10, 20);
    h(10);
    h(10.0f);
}