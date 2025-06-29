#include "StackInt.h"

StackInt::StackInt() { // 생성자
    top = 0;
}

bool StackInt::empty() const { // 스택이 비어있는지 확인
    return top == 0; // 스택의 top 인덱스가 0이면 비어있음
}

bool StackInt::full() const { // 스택이 가득 찼는지 확인
    return top == MAXSTACK; // 스택의 top 인덱스가 최대 크기와 같으면 가득 참
}

void StackInt::initialize() { // 스택 초기화
    top = 0; // top 인덱스를 0으로 초기화
}

void StackInt::push(INT_ITEM n) { // 스택에 아이템 추가
    if (!full()) { // 스택이 가득 차지 않았을 때만 추가
        item[top++] = n; // 현재 top 인덱스에 아이템을 추가하고, top 인덱스를 증가시킴
    }
}

INT_ITEM StackInt::pop() { // 스택에서 아이템 제거
    if (!empty()) { // 스택이 비어있지 않을 때만 제거
        return item[--top]; // 현재 top 인덱스를 감소시킨 후, 해당 인덱스의 아이템을 반환
    }

    return 0; // 스택이 비어있을 경우, 0을 반환
}