#include "StackInt.h"

StackInt::StackInt() { // ������
    top = 0;
}

bool StackInt::empty() const { // ������ ����ִ��� Ȯ��
    return top == 0; // ������ top �ε����� 0�̸� �������
}

bool StackInt::full() const { // ������ ���� á���� Ȯ��
    return top == MAXSTACK; // ������ top �ε����� �ִ� ũ��� ������ ���� ��
}

void StackInt::initialize() { // ���� �ʱ�ȭ
    top = 0; // top �ε����� 0���� �ʱ�ȭ
}

void StackInt::push(INT_ITEM n) { // ���ÿ� ������ �߰�
    if (!full()) { // ������ ���� ���� �ʾ��� ���� �߰�
        item[top++] = n; // ���� top �ε����� �������� �߰��ϰ�, top �ε����� ������Ŵ
    }
}

INT_ITEM StackInt::pop() { // ���ÿ��� ������ ����
    if (!empty()) { // ������ ������� ���� ���� ����
        return item[--top]; // ���� top �ε����� ���ҽ�Ų ��, �ش� �ε����� �������� ��ȯ
    }

    return 0; // ������ ������� ���, 0�� ��ȯ
}