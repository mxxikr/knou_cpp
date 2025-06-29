#include <iostream>
#include <utility> // std::move

using namespace std;

// ���ø� ��� ���� Ŭ���� ���� �� ����
template <typename T>
class Stack {
public:
    T* buf; // ���� ���� �迭
    int top; // ���� top ��ġ
    int size; // ���� ũ��
public:
    Stack(int s); // ������
    virtual ~Stack(); // �Ҹ���
    bool full() const;
    bool empty() const;
    void push(const T& a); // ����
    void push(T&& a); // �̵�
    T&& pop();
};

// ������
template <typename T>
Stack<T>::Stack(int s) : size(s), top(0) {
    buf = new T[s];
}

// �Ҹ���
template <typename T>
Stack<T>::~Stack() {
    delete[] buf;
}

// ������ ���� á����
template <typename T>
bool Stack<T>::full() const {
    return top == size;
}

// ������ �������
template <typename T>
bool Stack<T>::empty() const {
    return top == 0;
}

// ���� push
template <typename T>
void Stack<T>::push(const T& a) {
    if (!full()) buf[top++] = a;
}

// �̵� push
template <typename T>
void Stack<T>::push(T&& a) {
    if (!full()) buf[top++] = std::move(a);
}

// pop (�̵� ��ȯ)
template <typename T>
T&& Stack<T>::pop() {
    return std::move(buf[--top]);
}