#include <iostream>
#include <exception>

using std::ostream;

const int DefaultSize = 10;

class Array {
    int* buf;
    int size;

public:
    Array(int s = DefaultSize); // �⺻ ������
	virtual ~Array() { delete[] buf; } // �Ҹ���
	int& operator[](int offset); // �ε��� ������ �����ε�
	const int& operator[](int offset) const; // ��� �ε��� ������ �����ε�
	int getsize() const { return size; } // �迭 ũ�� ��ȯ �Լ�

    class BadIndex: public std::exception {
    public:
        int wrongIndex;
        BadIndex(int n) : wrongIndex(n), exception() {}
        const char* what() const noexcept override {
            return "Array Exception::";
        }
    };

    friend ostream& operator<<(ostream&, Array&);
};