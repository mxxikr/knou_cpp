class IntClass2 {
    int a;
public:
    IntClass2(int n = 0) : a(n) {} // 생성자
    IntClass2 operator ++ (int) { // 후위 표기 ++ 연산자 다중 정의
		IntClass2 tmp(*this); // 현재 객체의 복사본을 tmp에 저장
		++a; // a 값을 증가시킴
		return tmp; // tmp를 반환하여 후위 연산의 결과를 제공
    }
	int getValue() const { return a; } // 현재 a 값을 반환하는 멤버 함수
};