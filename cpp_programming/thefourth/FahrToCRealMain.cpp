#include <iostream>
using namespace std;

float FahrToCReal(float fahr); // 함수의 원형

int main2()
{
    float fTemp, cTemp;

    cout << "화씨온도 : ";
    cin >> fTemp;
    cTemp = FahrToCReal(fTemp); // 함수 호출
    cout << "---> 섭씨온도 : " << cTemp << endl;
    return 0;
}

float FahrToCReal(float fahr)
{
    return (fahr - 32) * 5 / 9;
}