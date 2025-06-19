#include <iostream>
#include <cstring>
#include <initializer_list>
using namespace std;

class VecF {
    int n; 
    float* arr;
public:
    VecF(int d, const float* a = nullptr) : n{ d } { // Ÿ�� ������
        arr = new float[d]; 
        if (a) memcpy(arr, a, sizeof(float) * n); // �迭 ����
    }

    VecF(initializer_list<float> lst)  // �ʱ�ȭ ����Ʈ ������
        : n{ static_cast<int>(lst.size()) } { // ����Ʈ ũ�� ���
        arr = new float[n]; // ���� �޸� �Ҵ�
        copy(lst.begin(), lst.end(), arr); // ����Ʈ�� ��Ҹ� arr�� ����
    }
};

int main()
{
    float a[4] = { 1.0f, 2.0f, 3.0f, 4.0f };
    VecF v1(4, a);
    VecF v2{ 2.0f, 4.0f, 6.0f, 8.0f }; // �ʱ�ȭ ����Ʈ ������ ȣ��

    return 0;
}