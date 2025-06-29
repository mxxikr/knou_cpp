#pragma once
#ifndef SORT_FUNCTION_TEMPLATE_H_INCLUDED
#define SORT_FUNCTION_TEMPLATE_H_INCLUDED

#include "SwapFT.h"

// 버블 정렬 알고리즘
template <typename T> void sortFT(T arr[], int size)
{
    bool doAgain = true; // 정렬 여부를 확인하는 변수
    for (int i = 1; doAgain; i++) { // i는 현재 패스 번호, 1부터 시작
        doAgain = false; // 초기값은 false로 설정
        for (int j = 0; j < size - i; j++) // j는 현재 비교할 인덱스, 마지막 i번째 전 까지 비교
        {
            if (arr[j] > arr[j + 1]) // 현재 인덱스와 다음 인덱스의 값을 비교
            {
                swapFT(arr[j], arr[j + 1]); // 값이 크면 교환
                doAgain = true; // 교환이 발생했으므로 다시 정렬을 시도해야 함
            }
        }
    }
}

#endif