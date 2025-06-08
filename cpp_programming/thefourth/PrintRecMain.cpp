#include <iostream>
using namespace std;
#include <chrono> // �ð� ������ ���� ��� ����

// SalesRec ����ü ����
struct SalesRec {
    char pID[10];
    int dYear, dMonth, dDate;
    char deliverAddr[40];
}; // 62����Ʈ(64����Ʈ)

void PrSalesRec64byte(SalesRec srec) // 64����Ʈ ����
{
    cout << "ǰ���ڵ� : " << srec.pID << endl;
    cout << "������� : " << srec.dYear << "�� ";
    cout << srec.dMonth << "�� ";
    cout << srec.dDate << "��" << endl;
    cout << "����ּ� : " << srec.deliverAddr << endl;
}

void PrSalesRec4byte(SalesRec& srec) // 4����Ʈ ����
{
    cout << "ǰ���ڵ� : " << srec.pID << endl;
    cout << "������� : " << srec.dYear << "�� ";
    cout << srec.dMonth << "�� ";
    cout << srec.dDate << "��" << endl;
    cout << "����ּ� : " << srec.deliverAddr << endl;
}

void PrSalesRecProtect(const SalesRec& srec) // srec ��ȣ
{
    cout << "ǰ���ڵ� : " << srec.pID << endl;
    cout << "������� : " << srec.dYear << "�� ";
    cout << srec.dMonth << "�� ";
    cout << srec.dDate << "��" << endl;
    cout << "����ּ� : " << srec.deliverAddr << endl;
}

int main5()
{
	SalesRec srec; // SalesRec ����ü ���� ����

	// ����ü ����� �� ����
	cout << "ǰ���ڵ� : ";
	cin >> srec.pID;
	cout << "�������(��, ��, ��) : ";
	cin >> srec.dYear >> srec.dMonth >> srec.dDate;
	cout << "����ּ� : ";
	cin.ignore(); // ���� ���� ����
	cin.getline(srec.deliverAddr, 40);

	// ����ü ������ ������ ���
    // �Լ� ȣ�� �ð� ���� �߰�
    cout << "=== 64����Ʈ ���� ===" << endl;
    auto start64 = chrono::high_resolution_clock::now();
	PrSalesRec64byte(srec); // 64����Ʈ ����
    auto end64 = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> duration64 = end64 - start64;
    cout << "�ҿ� �ð�(64����Ʈ ����): " << duration64.count() << " ms" << endl; // ����ü ��ü�� �Լ� ȣ���� ������ �����ϱ� ������ �ð� �ҿ� ŭ

    cout << "=== 4����Ʈ ���� ===" << endl;
    auto start4 = chrono::high_resolution_clock::now();
    PrSalesRec4byte(srec); // 4����Ʈ ����
    auto end4 = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> duration4 = end4 - start4;
    cout << "�ҿ� �ð�(4����Ʈ ����): " << duration4.count() << " ms" << endl;
    
    cout << "=== srec ��ȣ ===" << endl;
    auto startProtect = chrono::high_resolution_clock::now();
    PrSalesRecProtect(srec); // srec ��ȣ
    auto endProtect = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> durationProtect = endProtect - startProtect;
    cout << "�ҿ� �ð�(srec ��ȣ): " << durationProtect.count() << " ms" << endl;

	return 0;
}