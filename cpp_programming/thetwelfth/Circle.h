#include "Figure.h"

class Circle : public Figure { // �� Ŭ����
    double cx, cy; // ���� �߽� ��ǥ
    double radius; // ���� �ݰ�
public:
    // ������ �׷��� �Ӽ��� ���� �� ��ü ����
    // (x, y) : �߽���ǥ
    // r : �ݰ�
    Circle(double x, double y, double r)
        : cx(x), cy(y), radius(r) {}

    // ���� �̵�, ���� ���� ũ�� ����, �׸��� ��� �Լ�
    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};