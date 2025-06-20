class Complex1 {
    double rPart, iPart; // 실수 부 및 허수 부

public:
    // 생성자
	Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {} // 생성자 초기화 -> 실수 부 r 및 허수 부 i를 초기화

    Complex1 conj() const { // Complex1 클래스의 임시 객체를 생성 -> 문장 실행 후 소멸
        return Complex1(rPart, -iPart); // 켤레 복소수 생성
    }
    
    Complex1 add(const Complex1& c) const { // Complex1 클래스의 임시 객체를 생성 -> 문장 실행 후 소멸
        return Complex1(rPart + c.rPart, iPart + c.iPart); // 두 복소수의 합을 반환
	} // 현재 객체와 인자로 받은 복소수를 더한 결과 복소수 객체를 반환
    
    Complex1 sub(const Complex1& c) const { // Complex1 클래스의 임시 객체를 생성 -> 문장 실행 후 소멸
        return Complex1(rPart - c.rPart, iPart - c.iPart);  // 두 복소수의 차를 반환
	} // 현재 객체에서 인자로 받은 복소수를 뺀 결과 복소수 객체를 반환
    
    Complex1 mul(const Complex1& c) const; // 두 복소수의 곱을 반환
    
    Complex1 div(const Complex1& c) const; // 두 복소수의 나눗셈을 반환
    
    void display() const; // 복소수 값을 출력
};