#include <iostream>
using namespace std;
#include "NamedObj.h" // NamedObj 클래스 정의 포함 헤더 파일

void f()
{
    NamedObj x("Third"); // 세 번째 객체의 생성
    x.display();         // 함수 반환 후 x는 소멸됨
}

int main()
{
    cout << "NamedObj 클래스의 객체 수 : " // 아직 아무 객체도 없는 상태
        << NamedObj::nObj() << endl; // 객체 생성 전이지만 static 멤버 함수이기 때문에 클래스 이름 이용해 호출 가능
    NamedObj a("First");  // 첫 번째 객체 생성
    NamedObj b("Second"); // 두 번째 객체 생성

    f();
    NamedObj c("Fourth"); // 네 번째 객체 생성
    c.display();
    cout << "NamedObj 클래스의 객체 수 : "
        << NamedObj::nObj() << endl;
    return 0;
}