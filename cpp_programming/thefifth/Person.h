#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

class Person { // Ŭ���� Person�� ���� ����
    char* name; // �̸��� �����ϴ� �����͸��
    char* addr; // �ּҸ� �����ϴ� �����͸��

public: // public ����Լ�
    Person(const char* name, const char* addr); // ������
    ~Person(); // �Ҹ���
    void print() const; // �̸��� �ּ� ���
    void chAddr(const char* newAddr); // �ּ� ����
};

#endif // PERSON_H_INCLUDED