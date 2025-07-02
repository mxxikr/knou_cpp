#include "IntArray1.h"
#include <cstring> 
using namespace std;

Array::Array(int s) : size(s)
{
    buf = new int[s];
    memset(buf, 0, sizeof(int) * s);
}

int& Array::operator[](int offset) // 배열 인덱스 연산자 오버로딩
{
    if (offset < 0 || offset >= size) // 예외조건 검사
        throw BadIndex(offset); // 예외객체 생성 및 전달
	return buf[offset]; // 배열의 해당 인덱스에 있는 값을 반환
}

const int& Array::operator[](int offset) const
{
    if (offset < 0 || offset >= size)
        throw BadIndex(offset);
    return buf[offset];
}

// << 연산자 정의
ostream& operator<<(ostream& os, Array& arr)
{
    os << "[";
    for (int i = 0; i < arr.getsize(); i++) {
        os << arr[i];
        if (i != arr.getsize() - 1) os << ", ";
    }
    os << "]";
    return os;
}