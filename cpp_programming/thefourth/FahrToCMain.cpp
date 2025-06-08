#include <iostream>
using namespace std;

// 화씨온도를 섭씨온도로 변환하는 함수
// 매개변수 float fahr: 화씨온도
// 반환값 섭씨온도(float)
float FahrToC(float fahr)
{
    return (fahr - 32) * 5 / 9; // 화씨온도를 섭씨온도로 변환하는 공식
} 

int main1()
{
    float fTemp, cTemp; // 화씨온도와 섭씨온도를 저장할 변수 선언
    cout << "화씨온도 : "; // 사용자에게 화씨온도를 입력받기 위한 메시지 출력
    cin >> fTemp; // 사용자로부터 화씨온도 입력 받기
    cTemp = FahrToC(fTemp); // 함수 호출
    cout << "---> 섭씨온도 : " << cTemp << endl; // 섭씨온도 출력
    return 0;
}