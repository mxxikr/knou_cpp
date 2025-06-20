#ifndef PENCILS_H_INCLUDED
#define PENCILS_H_INCLUDED

class Pencils {
    int dozens;   // 타
    int np;       // 낱개
public:
	Pencils() : dozens(0), np(0) {}; // 기본 생성자
    Pencils(int n)
    {
		dozens = n / 12; np = n % 12; 
    }
	Pencils(int d, int n) : dozens(d), np(n) {} // 매개 변수 생성자
    Pencils& operator ++ ();      // ++ 연산자(전위 표기)
    Pencils operator ++(int);     // ++ 연산자(후위 표기)
	void display() const; // 현재 상태 출력
};

#endif