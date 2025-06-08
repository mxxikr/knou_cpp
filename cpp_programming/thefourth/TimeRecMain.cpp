#include <iostream>

using namespace std;

struct TimeRec {
    int hours;
    int minutes;
};

// 시간을 더하는 함수
// 인수 TimeRec &t1 : 누계할 시간
// const TimeRec &t2 : 더할 시간
// 반환값 없음

void AddTime(TimeRec& t1, const TimeRec& t2)
{
    t1.minutes += t2.minutes;
    t1.hours += t2.hours + t1.minutes / 60;
    t1.minutes %= 60;
}

void AddTime(TimeRec& t, int minutes)
{
    t.minutes += minutes;
    t.hours += t.minutes / 60;
    t.minutes %= 60;
}

int main7()
{
    TimeRec tRec1 = { 2, 30 }; // 2시간 30분을 저장하는 구조체 변수 tRec1 선언
    TimeRec tRec2 = { 1, 45 }; // 1시간 45분을 저장하는 구조체 변수 tRec2 선언

    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << tRec2.hours << "시간 " << tRec2.minutes << "분 = ";
    // tRec1에 tRec2를 더함
    AddTime(tRec1, tRec2); // void AddTime(TimeRec &t1, const TimeRec &t2) 호출
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;

    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << "135분 = ";
    // 135분을 tRec1에 더함
    AddTime(tRec1, 135); // void AddTime(TimeRec &t, int minutes) 호출
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl; 
    return 0;
}