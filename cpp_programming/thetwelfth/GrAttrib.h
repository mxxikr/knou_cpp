#ifndef __GRATTRIB_H__
#define __GRATTRIB_H__

#include <string>
using namespace std;

class GrAttrib { // �׷��� �Ӽ� Ŭ����
    string lineColor; // �� �� �Ӽ�
    string fillColor; // ���� ���� �� �Ӽ�
public:
    // �׷��� �Ӽ� ��ü ������
    GrAttrib() : lineColor("������"), fillColor("���") {} // �⺻ �� lineColor ������ fillColor ���
    GrAttrib(const string& lc, const string& fc) : lineColor(lc), fillColor(fc) {} // �Ű������� �� ����, ���� ���� �޾Ƽ� �� ������ �ʱ�ȭ

    // �Ӽ� ���� ��� �Լ�
    void setLineColor(const string& lc) { // �� ���� ����
        lineColor = lc;
    }
    void setFillColor(const string& fc) { // ���� ���� ����
        fillColor = fc;
    }

    // �Ӽ� ���� ��� ��� �Լ�
    string getLineColor() const {
        return lineColor;
    }
    string getFillColor() const {
        return fillColor;
    }
};

extern GrAttrib curAttrib; // ���� �Ӽ��� ��Ÿ���� ���� ��ü

#endif // __GRATTRIB_H__