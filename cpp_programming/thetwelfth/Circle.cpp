#include <iostream>
#include "Circle.h"
using namespace std;

// ���� �߽���ǥ�� (dx, dy)��ŭ �̵�
void Circle::move(double dx, double dy) {
    cx += dx;
    cy += dy;
}

// ���� �������� s�� ũ�� ����
void Circle::scale(double s) {
    cx *= s;
    cy *= s;
    radius *= s;
}

// ���� �׸��� ��� ���
void Circle::draw() const {
    cout << "�� �׸���" << endl;
    cout << "(" << cx << ", " << cy << ")�κ��� "; // �߽���ǥ ���
    cout << "radius " << radius << "��ŭ ������ ��� ������ "; // ������ ���
    cout << attrib.getLineColor() << "���� �׸���" << endl; // �� ���� ���
    cout << "���θ� " << attrib.getFillColor(); // ���� ���� ���
    cout << "���� ä���." << endl;
}