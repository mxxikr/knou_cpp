#include <iostream>
using namespace std;

/**
	이름을 갖는 객체를 만들 수 있는 VecF 클래스를 정의하고자 한다.
	객체가 생성될 때 고유 번호를 가지게 되는데, 이 번호는 NamedObj 객체가 생성됨에 따라 1번부터 시작하여 차례로 부여되는 일련번호이다.
	객체는 자기 자신의 일련번호와 이름을 출력할 수 있으며, 현재 존재하는 NamedObj 클래스의 객체 수를 구할 수 있다.
**/
class NamedObj {
	char* name; // 객체의 이름(동적 할당된 문자열)
	int id;  // 객체의 고유 일련번호 (생성된 순서)
	// static 데이터 멤버 - 클래스 전체에 하나씩만 만들어짐
	static int nConste; // 생성된 객체 수 (클래스 전체에서 공유)
	static int nDestr;  // 소멸된 객체 수 (클래스 전체에서 공유)
public: 
	NamedObj(const char* s); // 생성자
	~NamedObj(); // 소멸자

	void display() const { // 객체의 속성 출력
		cout << "ID : " << id << " 이름 : " << name << endl;
	}

	static int nObj() { // 현재 존재하는 객체 수 반환(static 함수)
		return nConste - nDestr; // 객체가 없는 상태에서도 동작 가능해야 함 (static 멤버만 사용해야 함)
	}
};