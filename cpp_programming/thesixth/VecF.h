#include <iostream>
#include <cstring>
using namespace std;

class VecF {
	int n; // private ��� - ������ ����
	float* arr; // private ��� -  float �� ���� �迭�� ����Ű�� ������
public:
	// ������
	VecF(int d, const float* a = nullptr) : n{ d } {  // ũ�� d�� ���͸� �����, a�� nullptr�� �ƴϸ� �ش� �迭�� ������ ����
		arr = new float[d];
		if (a) memcpy(arr, a, sizeof(float) * n); // �迭�� ���� �Ǿ��ٸ� �޸𸮿� ����ִ� ������ �ٸ� �޸� �������� ������
	}

	// ���� ������ - ������ Ŭ���� Ÿ���� ��ü�� ���ο� ��ü�� �ʱ�ȭ�� �� ����ϴ� ������
	VecF(const VecF& fv) : n(fv.n) { // �Ű� ������ �ڽ��� Ŭ���� Ÿ���� ������ �ϳ��� ��������
		arr = new float[n];
		memcpy(arr, fv.arr, sizeof(float) * n); // �����͸� ������ �� �ִ� �޸� ���� �Ҵ�
	}

	// �̵� ������ - rvalue ������ ���� �� ��ü�� �ڿ��� �̵��ϴ� ������
	VecF(VecF&& fv) : n{ fv.n }, arr(fv.arr) { // r value ����
		fv.arr = nullptr; // �ڱ� �ڽ��� ������ �ִ� �޸𸮸� ���� �� ��ü���ٰ� �Ű��� ������ ��ü�� �ش�Ǵ� ������ nullptr�� �� �ڿ� �̵� ��Ŵ
		fv.n = 0;
	}

	~VecF() { // �Ҹ���
		delete[] arr; // �Ҵ� ���� �޸� �ý��ۿ� �ݳ�
	}

	VecF add(const VecF& fv) const { // �� ������ ���� ���Ͽ� ���ο� ���ͷ� ����
		VecF tmp(n); // ������ ���� ����� ������ �ӽ� ��ü
		for (int i = 0; i < n; i++)
			tmp.arr[i] = arr[i] + fv.arr[i];
		return tmp; // ���� ����� ��ȯ��
	}

	void print() const { // ������ ���ҵ��� ���
		cout << "[ ";
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << "]";
	}
};