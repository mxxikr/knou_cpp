class IntClass2 {
    int a;
public:
    IntClass2(int n = 0) : a(n) {} // ������
    IntClass2 operator ++ (int) { // ���� ǥ�� ++ ������ ���� ����
		IntClass2 tmp(*this); // ���� ��ü�� ���纻�� tmp�� ����
		++a; // a ���� ������Ŵ
		return tmp; // tmp�� ��ȯ�Ͽ� ���� ������ ����� ����
    }
	int getValue() const { return a; } // ���� a ���� ��ȯ�ϴ� ��� �Լ�
};