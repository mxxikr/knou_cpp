#include <iostream>
#include <utility> // std::move

using namespace std;

// 템플릿 기반 스택 클래스 선언 및 구현
template <typename T>
class Stack {
public:
    T* buf; // 원소 저장 배열
    int top; // 현재 top 위치
    int size; // 스택 크기
public:
    Stack(int s); // 생성자
    virtual ~Stack(); // 소멸자
    bool full() const;
    bool empty() const;
    void push(const T& a); // 복사
    void push(T&& a); // 이동
    T&& pop();
};

// 생성자
template <typename T>
Stack<T>::Stack(int s) : size(s), top(0) {
    buf = new T[s];
}

// 소멸자
template <typename T>
Stack<T>::~Stack() {
    delete[] buf;
}

// 스택이 가득 찼는지
template <typename T>
bool Stack<T>::full() const {
    return top == size;
}

// 스택이 비었는지
template <typename T>
bool Stack<T>::empty() const {
    return top == 0;
}

// 복사 push
template <typename T>
void Stack<T>::push(const T& a) {
    if (!full()) buf[top++] = a;
}

// 이동 push
template <typename T>
void Stack<T>::push(T&& a) {
    if (!full()) buf[top++] = std::move(a);
}

// pop (이동 반환)
template <typename T>
T&& Stack<T>::pop() {
    return std::move(buf[--top]);
}