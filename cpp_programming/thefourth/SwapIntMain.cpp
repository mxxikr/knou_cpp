#include <iostream>
using namespace std;
void SwapValues(int& x, int& y); // 원형 선언

int main4()
{
    int a, b; // 두 정수를 저장할 변수 선언

    cout << "두 수를 입력하시오 : ";
    cin >> a >> b;
    if (a < b) SwapValues(a, b); // 순서를 바꿔 a에 큰 값을 넣음
    cout << "큰 수 = " << a << " 작은 수 = " << b << endl;
    return 0;
}

// x와 y의 값을 서로 바꾸는 함수
void SwapValues(int& x, int& y) // 참조 매개변수 사용 
{
    int temp = x; // x의 값을 임시 변수에 저장
    x = y; // y의 값을 x에 저장
    y = temp; // 임시 변수에 저장된 값을 y에 저장
}