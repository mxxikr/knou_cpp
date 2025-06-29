#include <iostream>
using namespace std;

template <typename T, int size>
class Buffer {
    T buf[size]; // ���� ũ�� ����
public: 
    void set(int idx, const T& v) { buf[idx] = v; } // ���ۿ� �� ����
    T get(int idx) { return buf[idx]; } // ���ۿ��� �� ��������
    int getSize() { return size; } // ���� ũ�� ��ȯ
};

int main4()
{
    // ũ�⸦ ���� ����� ��Ȯ�� �����ؾ� ��
    Buffer<char, 128> buf1; // ũ�Ⱑ 128�� char Ÿ�� ���� ����
    Buffer<double, 8> buf2; // ũ�Ⱑ 8�� double Ÿ�� ���� ����

    buf1.set(0, 'X'); // ���ۿ� ���� X ����
    buf2.set(0, 3.14); // ���ۿ� �Ǽ� 3.14 ����

    cout << "buf1[0] = " << buf1.get(0) << ", size = " << buf1.getSize() << endl;
    cout << "buf2[0] = " << buf2.get(0) << ", size = " << buf2.getSize() << endl;

    // int n = 10;
    // Buffer<char, n> buf3; // n�� ����� �����Ǳ� ������ ������ ���� �߻�
    return 0;
}