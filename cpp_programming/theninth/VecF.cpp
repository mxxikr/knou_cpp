#include "VecF.h"
#include <cstring> // memcpy ����� ���� �ʿ�

// ũ��� ������ �����͸� �޾� ���͸� �����ϴ� ������
VecF::VecF(int n, const float* data) : n(n), arr(new float[n]) {
    if (data)
        std::memcpy(arr, data, sizeof(float) * n); // ���޹��� ������ ����
    else
        std::fill(arr, arr + n, 0.0f); // �����Ͱ� ������ 0���� �ʱ�ȭ
}

// ũ�⸸ �޾� 0���� �ʱ�ȭ�� ���͸� �����ϴ� ������
VecF::VecF(int n) : n(n), arr(new float[n]) {
    std::fill(arr, arr + n, 0.0f); // ��� ���Ҹ� 0���� �ʱ�ȭ
}

// ���� ������ - �ٸ� VecF ��ü�� ���� ����
VecF::VecF(const VecF& other) : n(other.n), arr(new float[other.n]) {
    std::memcpy(arr, other.arr, sizeof(float) * n); // ������ ����
}

// �̵� ������ - �ӽ� ��ü�� �ڿ��� ���� ��ü�� �̵�
VecF::VecF(VecF&& other) : n(other.n), arr(other.arr) {
    other.arr = nullptr; // ���� ��ü�� �迭�� ����Ű�� �ʵ��� ó��
    other.n = 0; // ���� ��ü�� ����� 0���� ����
}

// �Ҹ��� - ���� �Ҵ�� �迭 �޸𸮸� ����
VecF::~VecF() {
    delete[] arr;
}

// ���� ���� ������ - �ٸ� VecF ��ü�� ���� ����
VecF& VecF::operator=(const VecF& fv) {
    if (n != fv.n) { // ũ�Ⱑ �ٸ���
        delete[] arr; // ���� �޸� ����
        arr = new float[n = fv.n]; // ���ο� �޸� �Ҵ� �� ũ�� ����
    }
    memcpy(arr, fv.arr, sizeof(float) * n); // ������ ����
    return *this; // �ڱ� �ڽ� ��ȯ
}

// �̵� ���� ������ - �ӽ� ��ü�� �ڿ��� ���� ��ü�� �̵�
VecF& VecF::operator=(VecF&& fv) {
    delete[] arr; // ���� �迭 �޸� ��ȯ
    n = fv.n; // ���� �ǿ����� ũ�� �̵�
    arr = fv.arr; // �迭 ������ �̵�
    fv.arr = nullptr; // nullptr�� �ٲ� ���� ��ü�� �迭�� ����Ű�� �ʵ��� ó��
    return *this;
}

// add �Լ� - �� ���͸� ���ؼ� ���ο� VecF ��ü ��ȯ
VecF VecF::add(const VecF& v) const {
    if (n != v.n) {
        throw std::length_error("Size mismatch"); // ũ�Ⱑ �ٸ��� ���� �߻�
    }
    VecF result(n); // ��� ���� ����
    for (int i = 0; i < n; ++i) {
        result.arr[i] = arr[i] + v.arr[i]; // ���Һ��� ���ϱ�
    }
    return result; // ���� ��� ��ȯ
}

// ��� ������ �����ε� - ���� ������ [1, 2, 3] ���·� ���
ostream& operator<<(ostream& os, const VecF& v) {
    os << "[";
    for (int i = 0; i < v.n; ++i) {
        os << v.arr[i];
        if (i < v.n - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

void swapVecF(VecF& v1, VecF& v2) {
	// ���� �����ڸ� ����� �ӽ� ��ü ���� �� ���� ������ ���
    //VecF tmp(v1); // ���� ����
    //v1 = v2; // ���� ������ ���
    //v2 = tmp; // ���� ������ ���

    // move �����ڸ� ����� �������� ��ȯ������ ��ü ��ȯ �Լ� ����
    VecF tmp = move(v1); // �̵� ������
    v1 = move(v2); // �̵� ���� ������ ���
    v2 = move(tmp); // �̵� ���� ������ ���
}