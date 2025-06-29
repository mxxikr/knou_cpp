#include <iostream>
#include "SortFT.h"
#include "MyString.h"
using namespace std;

int main()
{
    int x[10] = { 6, 0, 3, 1, 2, 9, 4, 5, 7, 8 }; // 정수형 배열 선언 및 초기화
    sortFT(x, 10); // sortFT 함수를 사용하여 배열 x 정렬
    for (auto i : x) // 배열 x의 각 요소 출력
        cout << i << " ";
    cout << endl;

    return 0;
}