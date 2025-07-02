#include <iostream>
#include <cstdlib>   
#include <new>       

using namespace std;

// 조화평균 함수
double hmean(double a, double b)
{
	if (a == -b) // a와 b가 서로 음의 관계일 때
    {
        cout << "나누기를 할 수 없습니다." << endl;
        exit(EXIT_FAILURE);  // 프로그램 강제 종료
    }
	return 2.0 * a * b / (a + b); // 조화평균 계산
}

void test_hmean()
{
    double x, y;
    cout << "[조화평균 계산]" << endl;
    cout << "두 실수를 입력: ";
    cin >> x >> y;
    double result = hmean(x, y);  // 에러면 여기서 종료
    cout << "조화평균: " << result << endl;
}

void test_memory()
{
    cout << "\n[대용량 메모리 할당 테스트]" << endl;
    cout << "필요한 배열 크기 입력 : ";
    size_t size;
    cin >> size;
    int* p = new(nothrow) int[size]; // nothrow로 예외 방지
    if (!p) {
        cerr << "메모리 할당 오류" << endl;
        exit(EXIT_FAILURE);   // 강제 종료
    }
    cout << "메모리 할당 성공!" << endl;
    delete[] p;
}

int main1()
{
    // 조화평균 에러 예시
    test_hmean();

    // 메모리 할당 에러 예시
    test_memory();

    cout << "프로그램 정상 종료" << endl;
    return 0;
}