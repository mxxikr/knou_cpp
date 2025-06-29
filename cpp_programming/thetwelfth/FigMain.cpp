#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

// ������ �׷��� �Ӽ�
GrAttrib curAttrib("������", "���");

void drawFigs(const Figure* const figs[], int n)
{
   
    for (int i = 0; i < n; i++) {
        figs[i]->draw(); // �� ������ draw() ����
    }
    cout << endl;
}

int main1()
{
    Figure* figs[2];
    figs[0] = new Circle(0, 20, 10); // �߽�(0,20), ������ 10�� �� ����
    double v[3][2] = { {0, 0}, {20, 0}, {10, 15} }; // �ﰢ�� ������ �迭

    curAttrib.setLineColor("����");
    curAttrib.setFillColor("���");
    figs[1] = new Triangle(v);

    drawFigs(figs, 2); // ��� ���� �׸��� ��� ���

    figs[0]->scale(2); // ù���� ���� ũ�� ����
    figs[1]->move(5, 10); // �ι�° �ﰢ���� �̵�
    drawFigs(figs, 2); // ��� ���� �׸��� ��� ���

    // �޸� ����
    delete figs[0];
    delete figs[1];
    
    return 0;
}