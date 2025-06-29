#ifndef __FIGURE_H__
#define __FIGURE_H__

#include <string>
#include "GrAttrib.h"
using namespace std;

class Figure {
	// ���� Ŭ������ �⺻ Ŭ����
	// ������ �̵�, ũ�� ����, �׸��� ����� ���� ���� ���� �Լ� ����
	// �׷��� �Ӽ��� GrAttrib Ŭ������ ����Ͽ� ����
protected:
    GrAttrib attrib; // �׷��� �Ӽ�
public:
    // ���� �׷��� �Ӽ��� ���� ���� ��ü ����
    Figure() : attrib(curAttrib) {}

    // �� �� �Ӽ� ����
    void setLineColor(const string& c) {
        attrib.setLineColor(c);
    }

    // ���� ������ �� ����
    void setFillColor(const string& c) {
        attrib.setFillColor(c);
    }

    // ������ �̵�, ���� ���� ũ�� ����, �׸��� ��� �Լ� (���� ���� �Լ�)
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double s) = 0;
    virtual void draw() const = 0;

    virtual ~Figure() {}
};

#endif // __FIGURE_H__