#ifndef __FIGURE_H__
#define __FIGURE_H__

#include <string>
#include "GrAttrib.h"
using namespace std;

class Figure {
	// 도형 클래스의 기본 클래스
	// 도형의 이동, 크기 조정, 그리기 기능을 위한 순수 가상 함수 선언
	// 그래픽 속성은 GrAttrib 클래스를 사용하여 관리
protected:
    GrAttrib attrib; // 그래픽 속성
public:
    // 현재 그래픽 속성에 따라 도형 객체 생성
    Figure() : attrib(curAttrib) {}

    // 선 색 속성 지정
    void setLineColor(const string& c) {
        attrib.setLineColor(c);
    }

    // 내부 영역의 색 지정
    void setFillColor(const string& c) {
        attrib.setFillColor(c);
    }

    // 도형의 이동, 원점 기준 크기 조정, 그리기 멤버 함수 (순수 가상 함수)
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double s) = 0;
    virtual void draw() const = 0;

    virtual ~Figure() {}
};

#endif // __FIGURE_H__