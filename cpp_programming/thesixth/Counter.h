class Counter {
	int value;

public:
	// Counter() {} // 생성자를 선언하지 않으면 컴파일러가 디폴트 생성자가 하나 있다고 생각함
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