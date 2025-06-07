#include <iostream>

int main9() {
	int* ptrVar = new int; // 동적 메모리 할당
	*ptrVar = 10; // 할당된 메모리에 값 저장
	std::cout << "동적 메모리에서 읽은 값: " << *ptrVar << std::endl; // 값 출력

	delete ptrVar; // 동적 메모리 해제 -> 메모리 반납
	ptrVar = nullptr; // 포인터 초기화
	std::cout << "ptrVar이 가리키는 값: " << (ptrVar ? *ptrVar : 0) << std::endl; // nullptr 체크 후 값 출력

	int* intPtr;
	intPtr = new int;
	*intPtr = 10;
	std::cout << "intPtr이 가리키는 값: " << *intPtr << std::endl; // 값 출력
	delete intPtr; // 동적 메모리 해제
	intPtr = nullptr; // 포인터 초기화
	std::cout << "intPtr이 가리키는 값: " << (intPtr ? *intPtr : 0) << std::endl; // nullptr 체크 후 값 출력

	int* intArrayPtr;
	intArrayPtr = new int[4];
	*intArrayPtr = 10;
	*(intArrayPtr + 1) = 20;
	intArrayPtr[2] = 30;

	std::cout << "intArrayPtr[1] = " << intArrayPtr[1] << std::endl;

	return 0;
}