#include <iostream>

class MyString {
    int len; // ���ڿ��� ����
    int bufSize; // ���� ������ ���ڿ��� ����
    char* buf;
    MyString(int s); // ������(private)
public:
    MyString(); // ����Ʈ ������
    MyString(const char* str); // ������
    MyString(const MyString& mstr); // ���� ������
    MyString(MyString&& mstr); // �̵� ������
    ~MyString(); // �Ҹ���
    int length() const; // ���ڿ� ���� ��ȯ �޼ҵ�

    // --- ������ ���� ���� ---
    MyString& operator=(const MyString& mstr); // ���� ������
    MyString& operator=(MyString&& mstr); // �̵� ���� ������
    MyString operator+(const MyString& mstr) const; // ���ڿ� ���� ������
    MyString& operator+=(const MyString& mstr); // ���ڿ� �߰� ������
    bool operator==(const MyString& mstr) const; // == ������
    bool operator>(const MyString& mstr) const; // > ������
    bool operator<(const MyString& mstr) const; // < ������
    char& operator[](int i); // [] ������
    char operator[](int i) const; // const [] ������

    // ��Ʈ�� ��� ������ (friend �Լ��� ����)
    friend std::ostream& operator<<(std::ostream& os, const MyString& mstr); // �ܺ� �Լ��� Ŭ������ Ŭ���� ���ο� ���� ����
};

// ��Ʈ�� ��� ������ ���� (inline)
inline std::ostream& operator<<(std::ostream& os, const MyString& mstr)
{
    os << mstr.buf;
    return os;
}