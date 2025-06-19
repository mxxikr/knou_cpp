#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch) // 스택에 데이터를 넣는 함수
{
    if (chkFull()) { // 스택이 가득 차 있으면
        cout << "스택이 가득 차 있습니다." << endl;
        return false;
    }

    buf[--top] = ch; // 스택에 공간이 있으면 top 위치를 감소시킨 후 데이터를 저장
    return true;
}

char CharStack::pop() // 스택에서 데이터를 꺼내는 함수
{
    if (chkEmpty()) { // 스택이 비어있으면
        cout << "스택에 데이터가 없습니다." << endl;
        return 0;
    }

    return buf[top++]; // top 위치를 증가 시킨 데이터를 반환
}
