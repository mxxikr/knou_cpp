#include "MIParttime.h"

int main2()
{
    Parttime chulsoo("ABC Univ.", "DEF Co."); // 학교, 회사 이름으로 객체 생성
    chulsoo.printSchool(); // Student의 멤버 함수 호출
    chulsoo.printCompany(); // Employee의 멤버 함수 호출

    return 0;
}