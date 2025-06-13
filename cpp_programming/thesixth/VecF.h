#include <iostream>
#include <cstring>
using namespace std;

class VecF {
	int n; // private 멤버 - 벡터의 차원
	float* arr; // private 멤버 -  float 형 동적 배열을 가리키는 포인터
public:
	// 생성자
	VecF(int d, const float* a = nullptr) : n{ d } {  // 크기 d의 벡터를 만들고, a가 nullptr이 아니면 해당 배열의 내용을 복사
		arr = new float[d];
		if (a) memcpy(arr, a, sizeof(float) * n); // 배열이 전달 되었다면 메모리에 들어있는 내용을 다른 메모리 영역으로 복사함
	}

	// 복사 생성자 - 동일한 클래스 타입의 객체로 새로운 객체를 초기화할 때 사용하는 생성자
	VecF(const VecF& fv) : n(fv.n) { // 매개 변수로 자신의 클래스 타입의 참조를 하나만 가져야함
		arr = new float[n];
		memcpy(arr, fv.arr, sizeof(float) * n); // 데이터를 저장할 수 있는 메모리 별도 할당
	}

	// 이동 생성자 - rvalue 참조로 전달 된 객체의 자원을 이동하는 생성자
	VecF(VecF&& fv) : n{ fv.n }, arr(fv.arr) { // r value 참조
		fv.arr = nullptr; // 자기 자신이 가지고 있던 메모리를 생성 된 객체에다가 옮겨준 다음에 객체에 해당되는 내용을 nullptr로 해 자원 이동 시킴
		fv.n = 0;
	}

	~VecF() { // 소멸자
		delete[] arr; // 할당 받은 메모리 시스템에 반납
	}

	VecF add(const VecF& fv) const { // 두 벡터의 합을 구하여 새로운 벡터로 리턴
		VecF tmp(n); // 벡터의 덧셈 결과를 저장할 임시 객체
		for (int i = 0; i < n; i++)
			tmp.arr[i] = arr[i] + fv.arr[i];
		return tmp; // 덧셈 결과를 반환함
	}

	void print() const { // 벡터의 원소들을 출력
		cout << "[ ";
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << "]";
	}
};