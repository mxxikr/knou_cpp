class IntClass1 {
    int a;
public:
    IntClass1(int n = 0) : a(n) {}  // ������
    IntClass1& operator ++ () {   // ���� ǥ�� ++ ������ ���� ����
		++a; // a�� ������Ŵ
		return *this; // ���� ��ü�� ��ȯ
    }
	int getValue() const { return a; } // �� ��ȯ �Լ�
};