#include <iostream>

class SafeIntArray {
    int limit;      // 원소의 개수
    int* arr;       // 데이터 저장 공간
public:
    // 생성자
    SafeIntArray(int n) : limit(n) {
        arr = new int[n]; // 공간 할당
    }

    // 소멸자
    ~SafeIntArray() {
        delete[] arr; // 공간 반환 
    }

    // 배열의 크기를 반환
    int size() const { return limit; }

    // l-value로 사용될 수 있는 operator[] (non-const 객체용)
    int& operator[](int i) { // i번 원소를 반환하는 멤버 함수
        if (i < 0 || i >= limit) {
            std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
            exit(EXIT_FAILURE);
        }
        return arr[i]; // i번 원소 반환
    }

    // r-value로 사용될 수 있는 operator[] (const 객체용)
    int operator[](int i) const {
        if (i < 0 || i >= limit) {
            std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
            exit(EXIT_FAILURE);
        }
        return arr[i]; // i번 원소 반환
    }
};