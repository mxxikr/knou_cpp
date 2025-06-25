#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Meter {
    int m;
    int cm;
public:
	Meter(int m_, int cm_) : m(m_), cm(cm_) {} // 생성자
	int getM() const { return m; } // m 단위 반환
	int getCM() const { return cm; } // cm 단위 반환
    void print() const {
		cout << m << "m " << cm << "cm"; // 출력 함수
    }
};

class Feet {
	int ft; // 피트 단위
	int in; // 인치 단위
public:
    // Meter → Feet 변환 생성자
    Feet(const Meter& m) {
		int cmeter = m.getM() * 100 + m.getCM(); // 미터를 센티미터로 변환
		in = static_cast<int>(cmeter / 2.54 + 0.5); // 센티미터를 인치로 변환
		ft = in / 12; // 피트 단위 계산
		in %= 12; // 나머지 인치 계산
    }
    void print() const {
        cout << ft << "ft " << in << "in";
    }
};

int main() {
    Meter m(1, 80);    // 1m 80cm
    Feet f = m;        // Meter → Feet 변환
    m.print(); cout << " = ";
    f.print(); cout << endl;
    return 0;
}