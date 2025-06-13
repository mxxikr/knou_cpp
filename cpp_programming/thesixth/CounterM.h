class CounterM {
	const int maxValue;
	int value;

public:
	// CounterM�� ����Ʈ ������ ����
	CounterM(int mVal) // ������
		: maxValue(mVal), value{ 0 } { // mVal �μ� �̿��� �ʱ�ȭ
	}
	void reset() {  // value�� 0���� �ʱ�ȭ�ϴ� �Լ�
		value = 0; 
	}
	void count() {
		value = value < maxValue ? value + 1 : 0; // value�� maxValue���� ������ 1 ����, �ƴϸ� 0���� �ʱ�ȭ
	}

	int getValue() const
	{
		return value;
	}
};