#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

// Person ��ü ������ �迭�� �޾Ƽ� ��� ����ϴ� �Լ�
void PrintPerson(const Person* const p[], int n)
{
    for (int i = 0; i < n; i++) {
        p[i]->print(); // �� ��ü�� print() �Լ� ȣ��(Person)
        cout << endl;
    }
}

int main2()
{
	Person dudley("Dudley"); // Person ��ü ����
	Student harry("Harry", "Hogwarts"); // Student ��ü ����
	Student ron("Ron", "Hogwarts"); // Student ��ü ����

    dudley.print(); cout << endl; // Dudley ���
    harry.print(); cout << endl << endl; // Harry goes to Hogwarts ���

	Person* pPerson[3]; // Person ��ü ������ �迭 ����
    pPerson[0] = &dudley; // Person ��ü ����
    pPerson[1] = &harry; // Student ��ü ���� (��ĳ����)
    pPerson[2] = &ron; // Student ��ü ���� (��ĳ����)
    PrintPerson(pPerson, 3); // �� ��ü ��� ���

    return 0;
}