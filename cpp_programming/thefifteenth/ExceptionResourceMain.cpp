#include <iostream>
#include <memory>
#include <vector>
using namespace std;

// 직접 메모리 할당 + 예외 시 자원 소실
void resourceLeakExample(bool ex_condition) {
    cout << "\n[직접 new[] 사용 + 자원 소실]" << endl;
    int* p = new int[1000];
    for (int i = 0; i < 1000; i++)
        p[i] = i;
    if (ex_condition)
        throw "예외 발생 (자원 소실)";
    delete[] p;
    cout << "메모리 정상 해제됨" << endl;
}

// unique_ptr 사용: 예외 발생해도 자동 해제
void uniquePtrExample(bool ex_condition) {
    cout << "\n[unique_ptr<int[]> 사용 예시]" << endl;
    unique_ptr<int[]> p{ new int[1000] };
    for (int i = 0; i < 1000; i++)
        p[i] = i;
    if (ex_condition)
        throw "예외 발생 (unique_ptr: 자동 메모리 해제)";
    cout << "unique_ptr 정상 해제됨" << endl;
}

// vector 사용: 예외 발생해도 자동 해제
void vectorExample(bool ex_condition) {
    cout << "\n[vector<int> 사용 예시]" << endl;
    vector<int> p(1000);
    for (int i = 0; i < 1000; i++)
        p[i] = i;
    if (ex_condition)
        throw "예외 발생 (vector: 자동 메모리 해제)";
    cout << "vector 정상 해제됨" << endl;
}

// unique_ptr 동작 예시
void uniquePtrBasic() {
    cout << "\n[unique_ptr 기초 예제]" << endl;
    unique_ptr<int> p1{ new int };
    unique_ptr<int> p2;
    *p1 = 10;
    cout << *p1 << endl;
    p2 = move(p1); // p2 = p1; 은 불가
    cout << *p2 << endl;
    p2 = nullptr; // 메모리 자동 해제
}

// noexcept 함수 예시
template <typename T>
T maxValue(const vector<T>& v) noexcept { // noexcept를 사용하여 예외 발생 안 함을 명시
	auto p = v.begin(); // 반복자 초기화
	T m = *p; // 첫 번째 요소로 초기화
	for (; p != v.end(); p++) // 반복자 사용
		if (m < *p) m = *p; // 최댓값 갱신
    return m;
}

void testNoexcept() {
    cout << "\n[noexcept 함수 예시]" << endl;
    vector<int> v{ 1, 9, 7, 4, 15, 2 };
    cout << "최댓값: " << maxValue(v) << endl;
}

int main3() {
    bool ex_condition;
    cout << "예외 발생(1) or 정상 실행(0) 선택: ";
    cin >> ex_condition;

    try {
        resourceLeakExample(ex_condition);
    }
    catch (const char* msg) {
        cout << msg << " (자원 해제 안 됨!)" << endl;
    }

    try {
        uniquePtrExample(ex_condition);
    }
    catch (const char* msg) {
        cout << msg << " (자원 해제 자동!)" << endl;
    }

    try {
        vectorExample(ex_condition);
    }
    catch (const char* msg) {
        cout << msg << " (자원 해제 자동!)" << endl;
    }

    uniquePtrBasic();
    testNoexcept();

    cout << "프로그램 정상 종료" << endl;
    return 0;
}