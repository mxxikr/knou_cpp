#include <iostream>
#include "IntArray1.h"
using namespace std;

int main4()
{
	Array arr(10);
    try {
        for (int i = 0; i < 10; i++)
            arr[i] = i;
         arr[10] = 10; // 인덱스 범위를 벗어나는 접근
    }
    catch (Array::BadIndex e) {
        cerr << "인덱스 범위 오류 : " << e.wrongIndex << endl;
    }
    cout << arr << endl;
    return 0;
}