#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class ConstructorCounter {
    int value;

public:
    //ConstructorCounter()
    //{
    //    value = 0;
    //}
    ConstructorCounter() : value(0) {} // 생성자 초기화 리스트를 사용하여 value를 0으로 초기화

    void reset()
    {
        value = 0;
    }

    void count()
    {
        ++value;
    }

    int getValue() const
    {
        return value;
    }
};

#endif // COUNTER_H_INCLUDED