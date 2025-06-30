#include <iostream>
#include <vector>
using namespace std;

int main2()
{
	vector<int> intVec(5); // 벡터의 크기를 5로 초기화
	for (int i = 0; i < intVec.size(); i++) // 벡터의 크기만큼 반복
		intVec[i] = i + 1; // 벡터의 각 요소에 1부터 5까지의 값을 저장

	vector<int>::iterator it = intVec.begin(); // 벡터의 시작 위치를 가리키는 반복자 생성
    cout << "저장된 데이터 : ";
	for (; it < intVec.end(); it++) // 반복자를 사용하여 벡터의 끝까지 순회
		cout << *it << " "; // 각 요소를 출력
    cout << endl;

	it = intVec.begin(); // 반복자를 벡터의 시작 위치로 다시 초기화
    cout << "3번째 데이터 : ";
	cout << *(it + 2) << endl; // 반복자를 사용하여 3번째 데이터를 출력
    return 0;
}