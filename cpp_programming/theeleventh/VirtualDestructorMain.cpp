#include <iostream>
using namespace std;

// ���� �Ҹ��ڰ� ���� ���
class BaseClassNoVirtual {
    int* ptB;
public:
    BaseClassNoVirtual(int n) {
        ptB = new int[n];
        cout << "BaseClassNoVirtual ����" << endl;
    }
    ~BaseClassNoVirtual() {
        delete[] ptB;
        cout << "BaseClassNoVirtual �Ҹ�" << endl;
    }
};

class DrvClassNoVirtual : public BaseClassNoVirtual {
    int* ptD;
public:
    DrvClassNoVirtual(int n1, int n2) : BaseClassNoVirtual(n1) {
        ptD = new int[n2];
        cout << "DrvClassNoVirtual ����" << endl;
    }
    ~DrvClassNoVirtual() {
        delete[] ptD;
        cout << "DrvClassNoVirtual �Ҹ�" << endl;
    }
};

// ���� �Ҹ��ڰ� �ִ� ���
class BaseClass {
    int* ptB;
public:
    BaseClass(int n) {
        ptB = new int[n];
        cout << "BaseClass ����" << endl;
    }
    virtual ~BaseClass() { // ���� �Ҹ��� ����
        delete[] ptB;
        cout << "BaseClass �Ҹ�" << endl;
    }
};

class DrvClass : public BaseClass {
    int* ptD;
public:
    DrvClass(int n1, int n2) : BaseClass(n1) {
        ptD = new int[n2];
        cout << "DrvClass ����" << endl;
    }
    ~DrvClass() {
        delete[] ptD;
        cout << "DrvClass �Ҹ�" << endl;
    }
};

int main5()
{
    cout << "==== ���� �Ҹ��� ���� ��� ====" << endl;
    BaseClassNoVirtual* pB1 = new BaseClassNoVirtual(3);
    BaseClassNoVirtual* pB2 = new DrvClassNoVirtual(4, 5);

    delete pB1; // BaseClassNoVirtual �Ҹ��ڸ� ȣ���
    delete pB2; // BaseClassNoVirtual �Ҹ��ڸ� ȣ��� (�޸� ���� �߻�)

    cout << endl;

    cout << "==== ���� �Ҹ��� �ִ� ��� ====" << endl;
    BaseClass* pV1 = new BaseClass(3);
    BaseClass* pV2 = new DrvClass(4, 5);

    delete pV1; // BaseClass �Ҹ��ڸ� ȣ���
    delete pV2; // DrvClass �Ҹ��� ȣ�� �� BaseClass �Ҹ��� ȣ��

    return 0;
}