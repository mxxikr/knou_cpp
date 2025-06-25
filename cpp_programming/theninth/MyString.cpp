#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "MyString.h"

// private ������
MyString::MyString(int s) : len(s), bufSize(s + 1) { // ��� ���� �� ���� �� �ʱ�ȭ
    buf = new char[s + 1];
    buf[s] = '\0';
}

// ����Ʈ ������
MyString::MyString() : len(0), bufSize(1) {
    buf = new char[1];
    buf[0] = '\0';
}

// ������
MyString::MyString(const char* str) {
    len = bufSize = strlen(str); // ���ڿ� ����
    buf = new char[len + 1]; // ���ڿ� ���� ���� �Ҵ�
    strcpy(buf, str); // ���ڿ� ����
}

// ���� ������
MyString::MyString(const MyString& mstr) : len(mstr.len), bufSize(mstr.len) {
    buf = new char[len + 1];
    strcpy(buf, mstr.buf);
}

// �̵� ������
MyString::MyString(MyString&& mstr) : len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf) {
    mstr.buf = nullptr;
}

// �Ҹ���
MyString::~MyString() {
    delete[] buf;
}

// ���ڿ� ���� ��ȯ �޼ҵ�
int MyString::length() const {
    return len;
}

// ���� ������
MyString& MyString::operator=(const MyString& mstr) {
    if (bufSize < mstr.len) { // ���ڿ� ������ �ʿ䷮���� ������
        delete[] buf; // ���� ���� ��ȯ
        len = bufSize = mstr.len; // ���ο� ���ڿ��� ����
        buf = new char[len + 1]; // ���ο� ���� �Ҵ�
    }
    else { // �׷��� ������
        len = mstr.len; // ���ڿ��� ���̸� ����
    }
    strcpy(buf, mstr.buf);
    return *this;
}

// �̵� ������
MyString& MyString::operator=(MyString&& mstr) {
    delete[] buf;
    len = mstr.len;
    bufSize = mstr.bufSize;
    buf = mstr.buf;
    mstr.buf = nullptr;
    return *this;
}

// ���ڿ� ���� ������
MyString MyString::operator+(const MyString& mstr) const {
    MyString tmstr(len + mstr.len); // private���� ������ ������
    strcpy(tmstr.buf, buf);
    strcpy(tmstr.buf + len, mstr.buf);
    return tmstr;
}

MyString& MyString::operator+=(const MyString& mstr) {
    if (bufSize < len + mstr.len) {
        char* tbuf = new char[bufSize = len + mstr.len + 1];
        strcpy(tbuf, buf);
        delete[] buf;
        buf = tbuf;
    }
    strcpy(buf + len, mstr.buf);
    len += mstr.len;
    return *this;
}

// == ������ ����
bool MyString::operator==(const MyString& mstr) const {
    return (len == mstr.len) && (strcmp(buf, mstr.buf) == 0);
}

// < ������ ����
bool MyString::operator<(const MyString& mstr) const {
    return strcmp(buf, mstr.buf) < 0;
}

// > ������ ����
bool MyString::operator>(const MyString& mstr) const {
    return strcmp(buf, mstr.buf) > 0;
}