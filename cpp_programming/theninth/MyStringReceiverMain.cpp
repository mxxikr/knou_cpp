#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyStrinMyStringReceiverMain {
    char* buf;
public:
	MyStrinMyStringReceiverMain(const char* str) { // ������
		buf = new char[strlen(str) + 1];
		strcpy(buf, str); // ���ڿ� ����
    }
    ~MyStrinMyStringReceiverMain() {
        delete[] buf; 
    }
    void print() const {
        cout << buf << endl;
    }
};

int main5() {
    const char* cstr = "C++ is fun";
    MyStrinMyStringReceiverMain s = cstr; // ������ �ڵ� ȣ��
    s.print();
    return 0;
}