#include <iostream>
#include <string>
#include <map>

using namespace std;

template<typename T>
class LESS_T { // �� ������ ���� �Լ� ��ü Ŭ���� ����
public:
	bool operator()(const T& a, const T& b) const { // operator() �����ε�
		return a < b; // �⺻������ �������� ����
    }
};

int main()
{
    map<string, string, LESS_T<string>> pBook{ // Less_T�� �̿��� ����� ���� ����
        {"������", "010-2233-4354"},
        {"�ڿ�ö", "010-2233-4455"}
    };

	pBook["��ö��"] = "010-1234-5678"; // ����
	pBook.insert(make_pair("�ֽ�ȣ", "010-7531-3456")); // ����
    pBook.insert({ "�ڿ�ö", "010-1357-2468" }); // ���� Ű�̹Ƿ� ���� �� ��

	for (auto pb = pBook.begin(); pb != pBook.end(); ++pb) { // map�� ó������ ������ �ݺ��ϸ� key�� value�� �� �پ� ���
        cout << pb->first << " " << pb->second << endl; // first�� key, second�� value
    }
    cout << pBook.size() << "���� ��ϵǾ� �ֽ��ϴ�." << endl;
    cout << endl;

    string str;
    cout << "ã�� �̸� : ";
    cin >> str;
	auto result = pBook.find(str); // find() �Լ��� key�� ������ �ش� ����� iterator�� ��ȯ�ϰ� ������ end()�� ��ȯ
	if (result != pBook.end()) { // end()�� ���Ͽ� ã�� ��Ұ� �ִ��� Ȯ��
        cout << result->first << "���� ��ȭ��ȣ�� " // first�� key, second�� value
            << result->second << " �Դϴ�." << endl;
    }
    else {
        cout << str << "���� ã�� �� �����ϴ�." << endl;
    }

    return 0;
}