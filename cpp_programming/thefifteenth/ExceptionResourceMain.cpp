#include <iostream>
#include <memory>
#include <vector>
using namespace std;

// ���� �޸� �Ҵ� + ���� �� �ڿ� �ҽ�
void resourceLeakExample(bool ex_condition) {
    cout << "\n[���� new[] ��� + �ڿ� �ҽ�]" << endl;
    int* p = new int[1000];
    for (int i = 0; i < 1000; i++)
        p[i] = i;
    if (ex_condition)
        throw "���� �߻� (�ڿ� �ҽ�)";
    delete[] p;
    cout << "�޸� ���� ������" << endl;
}

// unique_ptr ���: ���� �߻��ص� �ڵ� ����
void uniquePtrExample(bool ex_condition) {
    cout << "\n[unique_ptr<int[]> ��� ����]" << endl;
    unique_ptr<int[]> p{ new int[1000] };
    for (int i = 0; i < 1000; i++)
        p[i] = i;
    if (ex_condition)
        throw "���� �߻� (unique_ptr: �ڵ� �޸� ����)";
    cout << "unique_ptr ���� ������" << endl;
}

// vector ���: ���� �߻��ص� �ڵ� ����
void vectorExample(bool ex_condition) {
    cout << "\n[vector<int> ��� ����]" << endl;
    vector<int> p(1000);
    for (int i = 0; i < 1000; i++)
        p[i] = i;
    if (ex_condition)
        throw "���� �߻� (vector: �ڵ� �޸� ����)";
    cout << "vector ���� ������" << endl;
}

// unique_ptr ���� ����
void uniquePtrBasic() {
    cout << "\n[unique_ptr ���� ����]" << endl;
    unique_ptr<int> p1{ new int };
    unique_ptr<int> p2;
    *p1 = 10;
    cout << *p1 << endl;
    p2 = move(p1); // p2 = p1; �� �Ұ�
    cout << *p2 << endl;
    p2 = nullptr; // �޸� �ڵ� ����
}

// noexcept �Լ� ����
template <typename T>
T maxValue(const vector<T>& v) noexcept { // noexcept�� ����Ͽ� ���� �߻� �� ���� ���
	auto p = v.begin(); // �ݺ��� �ʱ�ȭ
	T m = *p; // ù ��° ��ҷ� �ʱ�ȭ
	for (; p != v.end(); p++) // �ݺ��� ���
		if (m < *p) m = *p; // �ִ� ����
    return m;
}

void testNoexcept() {
    cout << "\n[noexcept �Լ� ����]" << endl;
    vector<int> v{ 1, 9, 7, 4, 15, 2 };
    cout << "�ִ�: " << maxValue(v) << endl;
}

int main3() {
    bool ex_condition;
    cout << "���� �߻�(1) or ���� ����(0) ����: ";
    cin >> ex_condition;

    try {
        resourceLeakExample(ex_condition);
    }
    catch (const char* msg) {
        cout << msg << " (�ڿ� ���� �� ��!)" << endl;
    }

    try {
        uniquePtrExample(ex_condition);
    }
    catch (const char* msg) {
        cout << msg << " (�ڿ� ���� �ڵ�!)" << endl;
    }

    try {
        vectorExample(ex_condition);
    }
    catch (const char* msg) {
        cout << msg << " (�ڿ� ���� �ڵ�!)" << endl;
    }

    uniquePtrBasic();
    testNoexcept();

    cout << "���α׷� ���� ����" << endl;
    return 0;
}