#pragma once
#ifndef SORT_FUNCTION_TEMPLATE_H_INCLUDED
#define SORT_FUNCTION_TEMPLATE_H_INCLUDED

#include "SwapFT.h"

// ���� ���� �˰���
template <typename T> void sortFT(T arr[], int size)
{
    bool doAgain = true; // ���� ���θ� Ȯ���ϴ� ����
    for (int i = 1; doAgain; i++) { // i�� ���� �н� ��ȣ, 1���� ����
        doAgain = false; // �ʱⰪ�� false�� ����
        for (int j = 0; j < size - i; j++) // j�� ���� ���� �ε���, ������ i��° �� ���� ��
        {
            if (arr[j] > arr[j + 1]) // ���� �ε����� ���� �ε����� ���� ��
            {
                swapFT(arr[j], arr[j + 1]); // ���� ũ�� ��ȯ
                doAgain = true; // ��ȯ�� �߻������Ƿ� �ٽ� ������ �õ��ؾ� ��
            }
        }
    }
}

#endif