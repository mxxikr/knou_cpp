typedef float FLOAT_ITEM; // ���ÿ� ������ �ڷ��� ����
class StackFloat { // ���� Ŭ���� ����
public:
    enum { MAXSTACK = 20 }; // ������ �ִ� ũ�� ����
    int top; // ������ top �ε���
    FLOAT_ITEM item[MAXSTACK]; // ���ÿ� ������ �ڷ����� ���� �迭
public:
    StackFloat(); // ������
    bool empty() const; // ������ ����ִ��� Ȯ��
    bool full() const; // ������ ���� á���� Ȯ��
    void initialize(); // ���� �ʱ�ȭ
    void push(FLOAT_ITEM s); // ���ÿ� ������ �߰�
    FLOAT_ITEM pop(); // ���ÿ��� ������ ���� 
};