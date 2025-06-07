#include <iostream>
#include <cmath>
using namespace std;

const double PI{ 3.14159 }; // 원주율 상수 정의

struct C2dType {
    double x, y;
};

struct CircleType {
    C2dType center;
    double radius;
};

class CircleClass { // 원 클래스
    C2dType center; // 중심 좌표
    double radius; // 반경

public:
    // 중심 (cx, cy), 반경 r로 원을 초기화
    void init(double cx, double cy, double r) {
        center.x = cx;
        center.y = cy;
        radius = r;
    }

    // 원의 면적 계산
    double area() const {
        return radius * radius * PI;
    }

    // 원의 중심 및 반경 출력
    void display() const {
        cout << " 중심: (" << center.x << ", " << center.y << "), 반경: " << radius;
    }

    // 두 원의 겹침 여부 판정
    bool chkOverlap(const CircleClass& c) const {
        double dx = center.x - c.center.x; // 중심 간의 x좌표 차이
        double dy = center.y - c.center.y; // 중심 간의 y좌표 차이
        double dCntr = sqrt(dx * dx + dy * dy); // 중심 간의 거리 계산
        return dCntr < radius + c.radius; // 두 원의 반경 합보다 중심 간 거리가 작으면 겹침
    }
};

int main5()
{
    CircleClass c1, c2;
    c1.init(0, 0, 10); // 중심(0, 0), 반경 10으로 초기화
    c2.init(30, 10, 5); // 중심(30, 10), 반경 5로 초기화

    cout << "원1";
    c1.display();
    cout << " 원1의 면적 : " << c1.area() << endl;

    cout << "원2";
    c2.display();
    cout << " 원2의 면적 : " << c2.area() << endl << endl;

    if (c1.chkOverlap(c2)) {
        cout << "두 원은 겹칩니다." << endl;
    }
    else {
        cout << "두 원은 겹치지 않습니다." << endl;
    }

    return 0;
}