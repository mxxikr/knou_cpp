class IntClass1 {
    int a;
public:
    IntClass1(int n = 0) : a(n) {}  // 생성자
    IntClass1& operator ++ () {   // 전위 표기 ++ 연산자 다중 정의
		++a; // a를 증가시킴
		return *this; // 현재 객체를 반환
    }
	int getValue() const { return a; } // 값 반환 함수
};