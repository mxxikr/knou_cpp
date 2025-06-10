#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class NoConstructorCounter {
    int value;

public:
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