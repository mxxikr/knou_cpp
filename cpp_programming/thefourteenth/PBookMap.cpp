#include <iostream>
#include <string>
#include <map>

using namespace std;

template<typename T>
class LESS_T { // 비교 연산을 위해 함수 객체 클래스 정의
public:
	bool operator()(const T& a, const T& b) const { // operator() 오버로딩
		return a < b; // 기본적으로 오름차순 정렬
    }
};

int main()
{
    map<string, string, LESS_T<string>> pBook{ // Less_T를 이용한 사용자 정의 정렬
        {"한정훈", "010-2233-4354"},
        {"박영철", "010-2233-4455"}
    };

	pBook["김철수"] = "010-1234-5678"; // 삽입
	pBook.insert(make_pair("최승호", "010-7531-3456")); // 삽입
    pBook.insert({ "박영철", "010-1357-2468" }); // 동일 키이므로 삽입 안 됨

	for (auto pb = pBook.begin(); pb != pBook.end(); ++pb) { // map을 처음부터 끝까지 반복하며 key와 value를 한 줄씩 출력
        cout << pb->first << " " << pb->second << endl; // first는 key, second는 value
    }
    cout << pBook.size() << "명이 등록되어 있습니다." << endl;
    cout << endl;

    string str;
    cout << "찾을 이름 : ";
    cin >> str;
	auto result = pBook.find(str); // find() 함수는 key가 있으면 해당 요소의 iterator를 반환하고 없으면 end()를 반환
	if (result != pBook.end()) { // end()와 비교하여 찾은 요소가 있는지 확인
        cout << result->first << "님의 전화번호는 " // first는 key, second는 value
            << result->second << " 입니다." << endl;
    }
    else {
        cout << str << "님을 찾을 수 없습니다." << endl;
    }

    return 0;
}