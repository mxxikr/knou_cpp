#include <iostream>

using namespace std;

const double PI{ 3.14159 }; // 원주율 상수 정의

struct C2dType {
	double x, y;
};

struct CircleType {
	C2dType center;
	double radius;
};

double circleArea(CircleType c)
{
	return c.radius * c.radius * PI;
}

int main4() {
	CircleType circle;
	circle.center.x = 10.0;
	circle.center.y = 20.0;
	circle.radius = 5.0;

	cout << "Circle Center: (" << circle.center.x << ", " << circle.center.y << ")" << endl;
	cout << "Circle Radius: " << circle.radius << endl;
	cout << "Circle Area: " << circleArea(circle) << endl;
	cout << "PI = " << PI << endl;

	CircleType c1 = { {0, 0}, 10 };
	CircleType c2 = { {1, 1}, 5 };
	cout << "c1 Area: " << circleArea(c1) << endl;
	cout << "c2 Area: " << circleArea(c2) << endl;

	return 0;
}