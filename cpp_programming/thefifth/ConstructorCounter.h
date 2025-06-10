#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class ConstructorCounter {
    int value;

public:
    //ConstructorCounter()
    //{
    //    value = 0;
    //}
    ConstructorCounter() : value(0) {} // ������ �ʱ�ȭ ����Ʈ�� ����Ͽ� value�� 0���� �ʱ�ȭ

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