#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person() : name("Unknown") {}  // ����Ʈ ������ �߰�
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
    Stack(int s) : size(s), top(0) { buf = new T[s]; } // ����Ʈ ������ �ʿ���
    ~Stack() { delete[] buf; }
    void push(const T& t) { buf[top++] = t; }
    T pop() { return buf[--top]; }
    bool empty() const { return top == 0; }
};

int main3() {
    Stack<Person> pStack(10); // ����Ʈ ������ ���� ��� ���� �߻�
    pStack.push(Person("Kim"));
    Person p = pStack.pop();
    p.print();
    cout << endl;

    return 0;
}