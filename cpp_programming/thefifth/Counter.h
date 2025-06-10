#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter { // Ŭ���� Counter�� ���� ����
    int value;

public: // Ŭ���� Counter�� ��� �Լ� ���� ����
    void reset() // value�� 0���� �ʱ�ȭ
    {
        value = 0;
    }

    void count() // value�� 1 ������Ŵ
    {
        ++value;
    }

    int getValue() const // value�� ��ȯ
    {
        return value;
    }
};

#endif // COUNTER_H_INCLUDED