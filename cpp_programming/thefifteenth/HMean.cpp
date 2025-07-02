#include <iostream>
using namespace std;

double hmean2(double a, double b) // 조화평균
{
    if (a == -b) // 예외 검출
        throw "조화평균을 계산할 수 없습니다!";
    return 2.0 * a * b / (a + b);
}

int main2()
{
    double x, y, z;
	char cFlag = 'y'; // 반복 여부를 결정하는 변수
	while (cFlag != 'n') // 'n'이 입력될 때까지 반복
    {
        cout << "\n두 수를 입력하시오 : ";
		cin >> x >> y; // 두 수 입력
        try { // 예외 발생 가능성이 있는 코드
			z = hmean2(x, y); // 조화평균 계산
            cout << "조화평균 = " << z << endl;
        }
        catch (const char* s) { // 예외 처리
			cout << s << endl; // 예외 메시지 출력
        }
        cout << "계속 할까요? (y/n) : ";
        cin >> cFlag;
    }
    return 0;
}