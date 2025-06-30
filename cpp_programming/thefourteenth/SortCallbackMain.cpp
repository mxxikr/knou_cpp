#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// �Ϲ� �Լ��� �������� ��
template<typename T>
bool compare_greater(const T& a, const T& b) {
	return a > b; // a�� b���� ũ�� true ��ȯ
}

// �Լ� ��ü(Ŭ����)�� �������� ��
template<typename T>
class GREATER { // �Լ� ��ü ����
public:
	bool operator()(const T& a, const T& b) const { // ������ () ���� ����
        return a > b;
    }
};

int main4() {
	vector<int> iv = { 23, 45, 12, 89, 34, 66, 10 }; // ���� ���� �ʱ�ȭ

    cout << "[����] ";
	for (auto i : iv) cout << i << " "; // auto Ű����� Ÿ�� �߷�
    cout << endl;

    // �Լ� �����͸� �̿��� �������� ����
    sort(iv.begin(), iv.end(), compare_greater<int>); // compare_greater �Լ� ���

    cout << "[�Լ��� �������� ����] ";
    for (auto i : iv) cout << i << " ";
    cout << endl;

    // �Լ� ��ü�� �̿��� �������� ����
    sort(iv.begin(), iv.end(), GREATER<int>()); // GREATER �Լ� ��ü ���

    cout << "[�Լ� ��ü�� �������� ����] ";
    for (auto i : iv) cout << i << " ";
    cout << endl;

    // ���ٽ��� ����� �������� ����
    sort(iv.begin(), iv.end(), [](int a, int b) { return a < b; });

    cout << "[���ٽ����� �������� ����] ";
    for (auto i : iv) cout << i << " ";
    cout << endl;

    return 0;
}