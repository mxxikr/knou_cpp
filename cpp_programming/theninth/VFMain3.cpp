#include <iostream>
#include "VecF.h"
using namespace std;

int main1() {
	float a[3] = { 1, 2, 3 };
    float b[3] = { 2, 4, 6 };
    VecF v1(3, a);
    VecF v2(3, b);
    VecF v3(3);
    cout << v1 << " + " << v2 << " = " << v3 << endl;

    // 대입 연산자 (l-value를 사용한 깊은 복사)
    v3 = v1; // 복사 대입 연산자 호출
    cout << v3 << endl;

    // 이동 대입 연산자 (r-value를 사용한 이동)
    v3 = v1.add(v2); // v1과 v2를 더한 결과를 새로 만들어 임시 객체로 반환
    cout << v1 << " + " << v2 << " = " << v3 << endl;

    // 벡터 교환
    swapVecF(v1, v2);
    cout << v1 << " + " << v2 << " = " << v3 << endl;

    return 0;
}