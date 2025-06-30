#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 일반 함수로 내림차순 비교
template<typename T>
bool compare_greater(const T& a, const T& b) {
	return a > b; // a가 b보다 크면 true 반환
}

// 함수 객체(클래스)로 내림차순 비교
template<typename T>
class GREATER { // 함수 객체 정의
public:
	bool operator()(const T& a, const T& b) const { // 연산자 () 다중 정의
        return a > b;
    }
};

int main4() {
	vector<int> iv = { 23, 45, 12, 89, 34, 66, 10 }; // 정수 벡터 초기화

    cout << "[원본] ";
	for (auto i : iv) cout << i << " "; // auto 키워드로 타입 추론
    cout << endl;

    // 함수 포인터를 이용한 내림차순 정렬
    sort(iv.begin(), iv.end(), compare_greater<int>); // compare_greater 함수 사용

    cout << "[함수로 내림차순 정렬] ";
    for (auto i : iv) cout << i << " ";
    cout << endl;

    // 함수 객체를 이용한 내림차순 정렬
    sort(iv.begin(), iv.end(), GREATER<int>()); // GREATER 함수 객체 사용

    cout << "[함수 객체로 내림차순 정렬] ";
    for (auto i : iv) cout << i << " ";
    cout << endl;

    // 람다식을 사용한 오름차순 정렬
    sort(iv.begin(), iv.end(), [](int a, int b) { return a < b; });

    cout << "[람다식으로 오름차순 정렬] ";
    for (auto i : iv) cout << i << " ";
    cout << endl;

    return 0;
}