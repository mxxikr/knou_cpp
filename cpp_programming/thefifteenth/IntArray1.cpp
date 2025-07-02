#include "IntArray1.h"
#include <cstring> 
using namespace std;

Array::Array(int s) : size(s)
{
    buf = new int[s];
    memset(buf, 0, sizeof(int) * s);
}

int& Array::operator[](int offset) // �迭 �ε��� ������ �����ε�
{
    if (offset < 0 || offset >= size) // �������� �˻�
        throw BadIndex(offset); // ���ܰ�ü ���� �� ����
	return buf[offset]; // �迭�� �ش� �ε����� �ִ� ���� ��ȯ
}

const int& Array::operator[](int offset) const
{
    if (offset < 0 || offset >= size)
        throw BadIndex(offset);
    return buf[offset];
}

// << ������ ����
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