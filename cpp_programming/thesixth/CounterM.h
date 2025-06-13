class CounterM {
	const int maxValue;
	int value;

public:
	// CounterM의 디폴트 생성자 없음
	CounterM(int mVal) // 생성자
		: maxValue(mVal), value{ 0 } { // mVal 인수 이용해 초기화
	}
	void reset() {  // value를 0으로 초기화하는 함수
		value = 0; 
	}
	void count() {
		value = value < maxValue ? value + 1 : 0; // value가 maxValue보다 작으면 1 증가, 아니면 0으로 초기화
	}

	int getValue() const
	{
		return value;
	}
};