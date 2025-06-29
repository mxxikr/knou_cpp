typedef int INT_ITEM; // ���ÿ� ������ �ڷ��� ����
class StackInt { // ���� Ŭ���� ����
public:
    enum { MAXSTACK = 20 }; // ������ �ִ� ũ�� ����
    int top; // ������ top �ε���
    INT_ITEM item[MAXSTACK]; // ���ÿ� ������ �ڷ����� ���� �迭
public:
    StackInt(); // ������
    bool empty() const; // ������ ����ִ��� Ȯ�� 
    bool full() const; // ������ ���� á���� Ȯ��
    void initialize(); // ���� �ʱ�ȭ
    void push(INT_ITEM s); // ���ÿ� ������ �߰�
    INT_ITEM pop(); // ���ÿ��� ������ ����
};