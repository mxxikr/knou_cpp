#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "NamedObj.h"
 
NamedObj::NamedObj(const char* s) { // ������ ����
	name = new char[strlen(s) + 1]; // ���ڿ��� ������ ������ �Ҵ�
	strcpy(name, s); // name�� s ����
	id = ++nConste; // ������ ��ü�� ���� ������Ű�� �̸� ID�� �ο���
}

NamedObj::~NamedObj() { // �Ҹ��� ����
	++nDestr; // �Ҹ�� ��ü�� ���� ������Ŵ
	delete[] name; // �������� �Ҵ��� �޸� ����
}

// static ������ ����� ���� �� �ʱ�ȭ
int NamedObj::nConste = 0; // static ������ ����� Ŭ���� ���� �ȿ��� ���� ���ְ� ������ cpp ���Ͽ��� ���Ǹ� ����� ��
int NamedObj::nDestr = 0;