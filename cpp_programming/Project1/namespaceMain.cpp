#include <iostream>
using namespace std; // namespace std�� ����Ͽ� std:: ���λ縦 ����

namespace NameSpace1 { int a = 10; } // ��Ī ������ �̸� : NameSpace1
namespace NameSpace2 { int a = 20; } // ��Ī ������ �̸� : NameSpace2
int a = 30; // ���� ���� a ���� �� �ʱ�ȭ
namespace NameSpace1 { int b = 50; } 

int main() {
	int a = 40; // ���� ���� a ���� �� �ʱ�ȭ
	std::cout << NameSpace1::a << std::endl; // NameSpace1�� a ���
	std::cout << NameSpace2::a << std::endl; // NameSpace2�� a ���
	cout << ::a << std::endl; // ���� ���� a ���
	cout << a << std::endl; // ���� ���� a ���
	cout << NameSpace1::b << std::endl; // NameSpace1�� b ���

	return 0;
}