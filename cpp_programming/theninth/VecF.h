#include <iostream>
using namespace std;

class VecF {
	int n; // ���� ũ��
	float* arr; // ���� �迭
public:
	VecF(int size, const float* data); // �Ϲ� ������
	VecF(int size); // ũ�⸸ �����ϴ� ������
	VecF(const VecF& v); // ���� ������
	VecF(VecF&& v) ; // �̵� ������
	~VecF(); // �Ҹ���

	VecF& operator=(const VecF& v); // ���� ���� ������
	VecF& operator=(VecF&& v); // �̵� ���� ������

	VecF add(const VecF& v) const; // v�� ���� ���� ����
	friend ostream& operator<<(ostream& os, const VecF& v); // ��� ������
};

void swapVecF(VecF& v1, VecF& v2); // ���� ��ȯ