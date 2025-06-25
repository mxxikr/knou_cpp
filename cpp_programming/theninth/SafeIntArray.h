#include <iostream>

class SafeIntArray {
    int limit;      // ������ ����
    int* arr;       // ������ ���� ����
public:
    // ������
    SafeIntArray(int n) : limit(n) {
        arr = new int[n]; // ���� �Ҵ�
    }

    // �Ҹ���
    ~SafeIntArray() {
        delete[] arr; // ���� ��ȯ 
    }

    // �迭�� ũ�⸦ ��ȯ
    int size() const { return limit; }

    // l-value�� ���� �� �ִ� operator[] (non-const ��ü��)
    int& operator[](int i) { // i�� ���Ҹ� ��ȯ�ϴ� ��� �Լ�
        if (i < 0 || i >= limit) {
            std::cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
            exit(EXIT_FAILURE);
        }
        return arr[i]; // i�� ���� ��ȯ
    }

    // r-value�� ���� �� �ִ� operator[] (const ��ü��)
    int operator[](int i) const {
        if (i < 0 || i >= limit) {
            std::cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
            exit(EXIT_FAILURE);
        }
        return arr[i]; // i�� ���� ��ȯ
    }
};