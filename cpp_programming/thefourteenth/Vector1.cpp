#include <iostream>
#include <vector>
using namespace std;

int main1()
{
    vector<int> intVec(5); // 벡터 객체 생성

	for (int i = 0; i < intVec.size(); i++) { // 벡터에 데이터 저장
        intVec[i] = i + 1;
    }
	cout << "벡터의 논리적 크기 : " << intVec.size() << endl; // 벡터의 논리적 크기 출력
	cout << "벡터의 물리적 크기 : " << intVec.capacity() << endl; // 벡터의 물리적 크기 출력
    cout << "저장된 데이터 : ";
    for (int i = 0; i < intVec.size(); i++) { 
		cout << intVec[i] << " "; // 벡터에 저장된 데이터 출력
    }
    cout << endl << endl;

    cout << "1개의 데이터 push_back" << endl;
	intVec.push_back(11); // 벡터에 데이터 추가
    cout << "벡터의 논리적 크기 : " << intVec.size() << endl;
    cout << "벡터의 물리적 크기 : " << intVec.capacity() << endl;
    cout << "저장된 데이터 : ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";
    cout << endl << endl;

    cout << "5개의 데이터 push_back" << endl;
    for (int i = 1; i <= 5; i++)
		intVec.push_back(i + 11); // 벡터에 5개의 데이터 추가
    cout << "벡터의 논리적 크기 : " << intVec.size() << endl;
    cout << "벡터의 물리적 크기 : " << intVec.capacity() << endl;
    cout << "저장된 데이터 : ";
    for (int i = 0; i < intVec.size(); i++)
        cout << intVec[i] << " ";

	cout << endl << endl << "3개의 데이터 pop_back" << endl; // 벡터에서 3개의 데이터 제거
    for (int i = 0; i < 3; i++) {
        intVec.pop_back();
    }
    cout << "벡터의 논리적 크기 : " << intVec.size() << endl;
    cout << "벡터의 물리적 크기 : " << intVec.capacity() << endl;
    cout << "저장된 데이터 : ";
    for (int i = 0; i < intVec.size(); i++) {
        cout << intVec[i] << " ";
    }
    cout << endl;

    return 0;
}