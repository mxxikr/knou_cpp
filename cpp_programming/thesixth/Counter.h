class Counter {
	int value;

public:
	// Counter() {} // �����ڸ� �������� ������ �����Ϸ��� ����Ʈ �����ڰ� �ϳ� �ִٰ� ������
	void reset() { 
		value = 0; 
	}

	void count() { 
		++value; 
	}
	
	int getValue() const
	{
		return value;
	}
};