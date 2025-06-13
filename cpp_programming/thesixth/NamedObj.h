#include <iostream>
using namespace std;

/**
	�̸��� ���� ��ü�� ���� �� �ִ� VecF Ŭ������ �����ϰ��� �Ѵ�.
	��ü�� ������ �� ���� ��ȣ�� ������ �Ǵµ�, �� ��ȣ�� NamedObj ��ü�� �����ʿ� ���� 1������ �����Ͽ� ���ʷ� �ο��Ǵ� �Ϸù�ȣ�̴�.
	��ü�� �ڱ� �ڽ��� �Ϸù�ȣ�� �̸��� ����� �� ������, ���� �����ϴ� NamedObj Ŭ������ ��ü ���� ���� �� �ִ�.
**/
class NamedObj {
	char* name; // ��ü�� �̸�(���� �Ҵ�� ���ڿ�)
	int id;  // ��ü�� ���� �Ϸù�ȣ (������ ����)
	// static ������ ��� - Ŭ���� ��ü�� �ϳ����� �������
	static int nConste; // ������ ��ü �� (Ŭ���� ��ü���� ����)
	static int nDestr;  // �Ҹ�� ��ü �� (Ŭ���� ��ü���� ����)
public: 
	NamedObj(const char* s); // ������
	~NamedObj(); // �Ҹ���

	void display() const { // ��ü�� �Ӽ� ���
		cout << "ID : " << id << " �̸� : " << name << endl;
	}

	static int nObj() { // ���� �����ϴ� ��ü �� ��ȯ(static �Լ�)
		return nConste - nDestr; // ��ü�� ���� ���¿����� ���� �����ؾ� �� (static ����� ����ؾ� ��)
	}
};