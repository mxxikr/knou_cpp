#include <iostream>
using namespace std;

class VecF {
	int n; // 벡터 크기
	float* arr; // 동적 배열
public:
	VecF(int size, const float* data); // 일반 생성자
	VecF(int size); // 크기만 지정하는 생성자
	VecF(const VecF& v); // 복사 생성자
	VecF(VecF&& v) ; // 이동 생성자
	~VecF(); // 소멸자

	VecF& operator=(const VecF& v); // 복사 대입 연산자
	VecF& operator=(VecF&& v); // 이동 대입 연산자

	VecF add(const VecF& v) const; // v와 더한 벡터 리턴
	friend ostream& operator<<(ostream& os, const VecF& v); // 출력 연산자
};

void swapVecF(VecF& v1, VecF& v2); // 벡터 교환