#include "StackFloat.h"

StackFloat::StackFloat() { // ������
    top = 0;
}

bool StackFloat::empty() const { // ������ ����ִ��� Ȯ��
    return top == 0; // ������ top �ε����� 0�̸� �������
}

bool StackFloat::full() const { // ������ ���� á���� Ȯ��
    return top == MAXSTACK; // ������ top �ε����� �ִ� ũ��� ������ ���� ��
}

void StackFloat::initialize() { // ���� �ʱ�ȭ
    top = 0; // top �ε����� 0���� �ʱ�ȭ
}

void StackFloat::push(FLOAT_ITEM n) { // ���ÿ� ������ �߰�
    if (!full()) { // ������ ���� ���� �ʾ��� ���� �߰�
        item[top++] = n; // ���� top �ε����� �������� �߰��ϰ�, top �ε����� ������Ŵ
    }
}

FLOAT_ITEM StackFloat::pop() { // ���ÿ��� ������ ����
    if (!empty()) { // ������ ������� ���� ���� ����
        return item[--top]; // ���� top �ε����� ���ҽ�Ų ��, �ش� �ε����� �������� ��ȯ
    }
    return 0.0f; // ������ ������� ���, 0.0f�� ��ȯ
}