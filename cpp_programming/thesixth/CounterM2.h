class CounterM2 {
	const int maxValue;
	int value;

public:
	CounterM2(int mVal)
		: maxValue(mVal), value{ 0 } {
	}

	CounterM2(const CounterM2& c) // 복사 생성자
		: maxValue(c.maxValue),
		value(c.value) {
	}

	void reset() { value = 0; }

	void count() {
		value++;
	}

	int getValue() const
	{
		return value;
	}
};