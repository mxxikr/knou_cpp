#include <iostream>
#include <cmath>
using namespace std;

const double PI{ 3.14159 }; // ������ ��� ����

struct C2dType {
    double x, y;
};

struct CircleType {
    C2dType center;
    double radius;
};

class CircleClass { // �� Ŭ����
    C2dType center; // �߽� ��ǥ
    double radius; // �ݰ�

public:
    // �߽� (cx, cy), �ݰ� r�� ���� �ʱ�ȭ
    void init(double cx, double cy, double r) {
        center.x = cx;
        center.y = cy;
        radius = r;
    }

    // ���� ���� ���
    double area() const {
        return radius * radius * PI;
    }

    // ���� �߽� �� �ݰ� ���
    void display() const {
        cout << " �߽�: (" << center.x << ", " << center.y << "), �ݰ�: " << radius;
    }

    // �� ���� ��ħ ���� ����
    bool chkOverlap(const CircleClass& c) const {
        double dx = center.x - c.center.x; // �߽� ���� x��ǥ ����
        double dy = center.y - c.center.y; // �߽� ���� y��ǥ ����
        double dCntr = sqrt(dx * dx + dy * dy); // �߽� ���� �Ÿ� ���
        return dCntr < radius + c.radius; // �� ���� �ݰ� �պ��� �߽� �� �Ÿ��� ������ ��ħ
    }
};

int main5()
{
    CircleClass c1, c2;
    c1.init(0, 0, 10); // �߽�(0, 0), �ݰ� 10���� �ʱ�ȭ
    c2.init(30, 10, 5); // �߽�(30, 10), �ݰ� 5�� �ʱ�ȭ

    cout << "��1";
    c1.display();
    cout << " ��1�� ���� : " << c1.area() << endl;

    cout << "��2";
    c2.display();
    cout << " ��2�� ���� : " << c2.area() << endl << endl;

    if (c1.chkOverlap(c2)) {
        cout << "�� ���� ��Ĩ�ϴ�." << endl;
    }
    else {
        cout << "�� ���� ��ġ�� �ʽ��ϴ�." << endl;
    }

    return 0;
}