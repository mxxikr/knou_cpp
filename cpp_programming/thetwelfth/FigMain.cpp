#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

// 현재의 그래픽 속성
GrAttrib curAttrib("검정색", "흰색");

void drawFigs(const Figure* const figs[], int n)
{
   
    for (int i = 0; i < n; i++) {
        figs[i]->draw(); // 각 도형의 draw() 실행
    }
    cout << endl;
}

int main1()
{
    Figure* figs[2];
    figs[0] = new Circle(0, 20, 10); // 중심(0,20), 반지름 10인 원 생성
    double v[3][2] = { {0, 0}, {20, 0}, {10, 15} }; // 삼각형 꼭짓점 배열

    curAttrib.setLineColor("빨강");
    curAttrib.setFillColor("노랑");
    figs[1] = new Triangle(v);

    drawFigs(figs, 2); // 모든 도형 그리기 방법 출력

    figs[0]->scale(2); // 첫번쨰 원의 크기 조정
    figs[1]->move(5, 10); // 두번째 삼각형의 이동
    drawFigs(figs, 2); // 모든 도형 그리기 방법 출력

    // 메모리 해제
    delete figs[0];
    delete figs[1];
    
    return 0;
}