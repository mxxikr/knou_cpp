#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Meter {
    int m;
    int cm;
public:
	Meter(int m_, int cm_) : m(m_), cm(cm_) {} // ������
	int getM() const { return m; } // m ���� ��ȯ
	int getCM() const { return cm; } // cm ���� ��ȯ
    void print() const {
		cout << m << "m " << cm << "cm"; // ��� �Լ�
    }
};

class Feet {
	int ft; // ��Ʈ ����
	int in; // ��ġ ����
public:
    // Meter �� Feet ��ȯ ������
    Feet(const Meter& m) {
		int cmeter = m.getM() * 100 + m.getCM(); // ���͸� ��Ƽ���ͷ� ��ȯ
		in = static_cast<int>(cmeter / 2.54 + 0.5); // ��Ƽ���͸� ��ġ�� ��ȯ
		ft = in / 12; // ��Ʈ ���� ���
		in %= 12; // ������ ��ġ ���
    }
    void print() const {
        cout << ft << "ft " << in << "in";
    }
};

int main() {
    Meter m(1, 80);    // 1m 80cm
    Feet f = m;        // Meter �� Feet ��ȯ
    m.print(); cout << " = ";
    f.print(); cout << endl;
    return 0;
}