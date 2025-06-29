#ifndef __GRATTRIB_H__
#define __GRATTRIB_H__

#include <string>
using namespace std;

class GrAttrib { // 그래픽 속성 클래스
    string lineColor; // 선 색 속성
    string fillColor; // 내부 영역 색 속성
public:
    // 그래픽 속성 객체 생성자
    GrAttrib() : lineColor("검정색"), fillColor("흰색") {} // 기본 값 lineColor 검정색 fillColor 흰색
    GrAttrib(const string& lc, const string& fc) : lineColor(lc), fillColor(fc) {} // 매개변수로 선 색상, 내부 색상 받아서 그 값으로 초기화

    // 속성 지정 멤버 함수
    void setLineColor(const string& lc) { // 선 색상 지정
        lineColor = lc;
    }
    void setFillColor(const string& fc) { // 내부 색상 지정
        fillColor = fc;
    }

    // 속성 값을 얻는 멤버 함수
    string getLineColor() const {
        return lineColor;
    }
    string getFillColor() const {
        return fillColor;
    }
};

extern GrAttrib curAttrib; // 현재 속성을 나타내는 전역 객체

#endif // __GRATTRIB_H__