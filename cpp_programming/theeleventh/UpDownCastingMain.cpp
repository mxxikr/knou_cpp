#include <iostream>
#include <string>
using namespace std;

class Person3 {
    string name;
public:
    Person3(const string& n) : name(n) {}
    virtual ~Person3() {}
    string getName() const { return name; }
};

class Student3 : public Person3 {
    string school;
public:
    Student3(const string& n, const string& s) : Person3(n), school(s) {}
    string getSchool() const { return school; }
};

int main6() {
    // static_cast로 다운 캐스팅이 정상적으로 동작하는 경우
    Person3* pPrsn1 = new Person3("Dudley");
    Student3* pStdnt1 = new Student3("Harry", "Hogwarts");
    Person3* pPrsn2 = pStdnt1; // Student3 객체의 주소를 Person3 포인터로 업캐스팅

    Student3* pStdnt2 = static_cast<Student3*>(pPrsn2); // 실제로 Student3 객체를 가리키고 있으니까 정상 동작
    cout << pStdnt2->getSchool() << endl; // Hogwarts가 출력됨

    // static_cast로 부적절한 다운 캐스팅을 한 경우
    pPrsn2 = pPrsn1; // pPrsn2는 Person3 객체를 가리킴
    Student3* pStdnt3 = static_cast<Student3*>(pPrsn2); // Person3 객체를 Student3*로 캐스팅
    cout << pStdnt3->getSchool() << endl; // 부적절한 변환으로 인해 프로그램이 이상하게 동작하거나 에러가 발생할 수 있음

    // dynamic_cast 사용
    pPrsn2 = pPrsn1; // Person3 객체를 가리킴
    Student3* pStdnt4 = dynamic_cast<Student3*>(pPrsn2); // Person3 타입이 실제로 Student3가 아니니까 nullptr 반환
    if (pStdnt4)
        cout << pStdnt4->getSchool() << endl;
    else
        cout << "캐스팅 실패" << endl; // 캐스팅 실패라고 출력됨

    pPrsn2 = pStdnt1; // Student3 객체를 가리킴
    Student3* pStdnt5 = dynamic_cast<Student3*>(pPrsn2); // 실제로 Student3 객체라서 정상 변환
    if (pStdnt5)
        cout << pStdnt5->getSchool() << endl; // Hogwarts가 출력됨
    else
        cout << "캐스팅 실패" << endl;

    delete pPrsn1;
    delete pStdnt1;

    return 0;
}