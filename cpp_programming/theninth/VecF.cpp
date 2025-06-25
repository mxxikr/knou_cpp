#include "VecF.h"
#include <cstring> // memcpy 사용을 위해 필요

// 크기와 데이터 포인터를 받아 벡터를 생성하는 생성자
VecF::VecF(int n, const float* data) : n(n), arr(new float[n]) {
    if (data)
        std::memcpy(arr, data, sizeof(float) * n); // 전달받은 데이터 복사
    else
        std::fill(arr, arr + n, 0.0f); // 데이터가 없으면 0으로 초기화
}

// 크기만 받아 0으로 초기화된 벡터를 생성하는 생성자
VecF::VecF(int n) : n(n), arr(new float[n]) {
    std::fill(arr, arr + n, 0.0f); // 모든 원소를 0으로 초기화
}

// 복사 생성자 - 다른 VecF 객체를 깊은 복사
VecF::VecF(const VecF& other) : n(other.n), arr(new float[other.n]) {
    std::memcpy(arr, other.arr, sizeof(float) * n); // 데이터 복사
}

// 이동 생성자 - 임시 객체의 자원을 현재 객체로 이동
VecF::VecF(VecF&& other) : n(other.n), arr(other.arr) {
    other.arr = nullptr; // 원본 객체는 배열을 가리키지 않도록 처리
    other.n = 0; // 원본 객체의 사이즈를 0으로 설정
}

// 소멸자 - 동적 할당된 배열 메모리를 해제
VecF::~VecF() {
    delete[] arr;
}

// 복사 대입 연산자 - 다른 VecF 객체를 깊은 복사
VecF& VecF::operator=(const VecF& fv) {
    if (n != fv.n) { // 크기가 다르면
        delete[] arr; // 기존 메모리 해제
        arr = new float[n = fv.n]; // 새로운 메모리 할당 및 크기 설정
    }
    memcpy(arr, fv.arr, sizeof(float) * n); // 데이터 복사
    return *this; // 자기 자신 반환
}

// 이동 대입 연산자 - 임시 객체의 자원을 현재 객체로 이동
VecF& VecF::operator=(VecF&& fv) {
    delete[] arr; // 기존 배열 메모리 반환
    n = fv.n; // 우측 피연산자 크기 이동
    arr = fv.arr; // 배열 포인터 이동
    fv.arr = nullptr; // nullptr로 바꿔 원본 객체는 배열을 가리키지 않도록 처리
    return *this;
}

// add 함수 - 두 벡터를 더해서 새로운 VecF 객체 반환
VecF VecF::add(const VecF& v) const {
    if (n != v.n) {
        throw std::length_error("Size mismatch"); // 크기가 다르면 예외 발생
    }
    VecF result(n); // 결과 벡터 생성
    for (int i = 0; i < n; ++i) {
        result.arr[i] = arr[i] + v.arr[i]; // 원소별로 더하기
    }
    return result; // 더한 결과 반환
}

// 출력 연산자 오버로딩 - 벡터 내용을 [1, 2, 3] 형태로 출력
ostream& operator<<(ostream& os, const VecF& v) {
    os << "[";
    for (int i = 0; i < v.n; ++i) {
        os << v.arr[i];
        if (i < v.n - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

void swapVecF(VecF& v1, VecF& v2) {
	// 복사 생성자를 사용해 임시 객체 생성 후 대입 연산자 사용
    //VecF tmp(v1); // 복사 생성
    //v1 = v2; // 대입 연산자 사용
    //v2 = tmp; // 대입 연산자 사용

    // move 연산자를 사용해 포인터의 교환만으로 객체 교환 함수 구현
    VecF tmp = move(v1); // 이동 생성자
    v1 = move(v2); // 이동 대입 연산자 사용
    v2 = move(tmp); // 이동 대입 연산자 사용
}