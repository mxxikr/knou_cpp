#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch) // ���ÿ� �����͸� �ִ� �Լ�
{
    if (chkFull()) { // ������ ���� �� ������
        cout << "������ ���� �� �ֽ��ϴ�." << endl;
        return false;
    }

    buf[--top] = ch; // ���ÿ� ������ ������ top ��ġ�� ���ҽ�Ų �� �����͸� ����
    return true;
}

char CharStack::pop() // ���ÿ��� �����͸� ������ �Լ�
{
    if (chkEmpty()) { // ������ ���������
        cout << "���ÿ� �����Ͱ� �����ϴ�." << endl;
        return 0;
    }

    return buf[top++]; // top ��ġ�� ���� ��Ų �����͸� ��ȯ
}
