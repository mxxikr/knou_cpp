#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class MyStringSenderMain {
    char* buf;
public:
	MyStringSenderMain(const char* str) { // ������
		buf = new char[strlen(str) + 1]; // ���ڿ� ���� + �� ���� ����
		strcpy(buf, str); // ���ڿ� ����
    }

	~MyStringSenderMain() { // �Ҹ���
		delete[] buf; // ���� �Ҵ�� �޸� ����
    }
    
    // C ���ڿ�(char*)�� �ڵ� ��ȯ
	operator char* () const { // MyStringSenderMain -> char* ��ȯ �� �ڵ� ȣ��
		char* pt = new char[strlen(buf) + 1]; // ���ο� ���� �޸� �Ҵ�
		strcpy(pt, buf); // buf�� ������ pt�� ����
		return pt; // pt�� ��ȯ
    }
};

int main4() {
    MyStringSenderMain s("Hello Class!");
    char* cstr = s; // operator char*() �۵�
    cout << cstr << endl;
    delete[] cstr;
    return 0;
}