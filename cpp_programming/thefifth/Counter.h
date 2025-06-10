#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter { // 클래스 Counter의 선언 시작
    int value;

public: // 클래스 Counter의 멤버 함수 선언 시작
    void reset() // value를 0으로 초기화
    {
        value = 0;
    }

    void count() // value를 1 증가시킴
    {
        ++value;
    }

    int getValue() const // value를 반환
    {
        return value;
    }
};

#endif // COUNTER_H_INCLUDED