#include <iostream>
#include <cstring>
#include <initializer_list>
using namespace std;

class VecF {
    int n; 
    float* arr;
public:
    VecF(int d, const float* a = nullptr) : n{ d } { // 타겟 생성자
        arr = new float[d]; 
        if (a) memcpy(arr, a, sizeof(float) * n); // 배열 복사
    }

    VecF(initializer_list<float> lst)  // 초기화 리스트 생성자
        : n{ static_cast<int>(lst.size()) } { // 리스트 크기 계산
        arr = new float[n]; // 동적 메모리 할당
        copy(lst.begin(), lst.end(), arr); // 리스트의 요소를 arr에 복사
    }
};

int main()
{
    float a[4] = { 1.0f, 2.0f, 3.0f, 4.0f };
    VecF v1(4, a);
    VecF v2{ 2.0f, 4.0f, 6.0f, 8.0f }; // 초기화 리스트 생성자 호출

    return 0;
}