#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person() : name("Unknown") {}  // 디폴트 생성자 추가
    Person(const string& n) : name(n) {}
    void print() {
        cout << name;
    }
};

template <typename T>
class Stack {
    T* buf;
    int size, top;
public:
    Stack(int s) : size(s), top(0) { buf = new T[s]; } // 디폴트 생성자 필요함
    ~Stack() { delete[] buf; }
    void push(const T& t) { buf[top++] = t; }
    T pop() { return buf[--top]; }
    bool empty() const { return top == 0; }
};

int main3() {
    Stack<Person> pStack(10); // 디폴트 생성자 없을 경우 에러 발생
    pStack.push(Person("Kim"));
    Person p = pStack.pop();
    p.print();
    cout << endl;

    return 0;
}