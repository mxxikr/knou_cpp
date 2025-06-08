#include <iostream>
#include <cmath> // pow, trunc 함수 사용을 위해 추가

using namespace std;

double Round(double x, int d = 0)
{
    double a = x >= 0 ? 0.5 : -0.5; // 양수는 0.5, 음수는 -0.5를 더함
    double pow10 = pow(10, d); // 10의 d제곱 계산
    return trunc(x * pow10 + a) / pow10; // x에 0.5 또는 -0.5를 더한 후, d자리까지 반올림하여 반환
}

void f(int x, int y = 10, int z = 20) {
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl; // 인수 출력
}

int main6()
{
    char str1[10], str2[10];
    cout << "문자열을 입력하세요(쉼표로 구분): ";
    cin.getline(str1, 10, ','); // ','까지 읽고 '\0'로 끝남
    cin.getline(str2, 10);      // '\n'까지 읽고 '\0'로 끝남

    cout << "str1: [" << str1 << "]" << endl;
    cout << "str2: [" << str2 << "]" << endl;
    
    cin.ignore(1000, '\n'); // 입력 버퍼에 남은 문자들을 모두 제거

    double a;
    cout << "값을 입력하세요: ";
    cin >> a;
    cout << "반올림 --> " << Round(a) << endl;
    cout << "          " << Round(a, 1) << endl;
    cout << "          " << Round(a, 2) << endl;
    cout << "          " << Round(a, 3) << endl << endl;

    f(5);              // x=5, y=10, z=20
    f(5, 100);         // x=5, y=100, z=20
    f(5, 100, 200);    // x=5, y=100, z=200
    // f(5, ,300);     // 컴파일 오류 발생 - 중간 인수 생략 불가

    return 0;
}