#include <iostream>
#include <exception>
using namespace std;

// ����� ���� ���� Ŭ����
class ExceptionClass : public exception {
public:
    const char* what() const noexcept override {
        return "ExceptionClass �߻�";
    }
};

int f(int a) {
    cout << "f() ����, a=" << a << endl;
    if (a < 0) {
        cout << "f()���� ���� �߻�" << endl;
        throw ExceptionClass();
    }
    cout << "f() ���� ����" << endl;
    return a * 2;
}

int g(int x) {
    cout << "g() ����, x=" << x << endl;
    try {
        int result = f(x);
        cout << "g()���� f() ���� ���Ϲ���: " << result << endl;
        return result + 1;
    }
    catch (ExceptionClass e) {
        cout << "g()���� ���� ĳġ, what(): " << e.what() << endl;
        throw; // ���� �������
    }
}

int h(int c) {
    cout << "h() ����, c=" << c << endl;
    try {
        int result = g(c);
        cout << "h()���� g() ���� ���Ϲ���: " << result << endl;
        return result + 1;
    }
    catch (ExceptionClass e) {
        cout << "h()���� ���� ĳġ, what(): " << e.what() << endl;
        throw; // ���� �������
    }
}

int main() {
    int num;
    cout << "������ ���� �߻�, ������ �Է��Ͻÿ�: ";
    cin >> num;

    try {
        int result = h(num);
        cout << "main()���� h() ���� ��ȯ�� ���: " << result << endl;
    }
    catch (ExceptionClass e) {
        cout << "main()���� ���� ���� ĳġ! what(): " << e.what() << endl;
    }

    cout << "���α׷� ����" << endl;
    return 0;
}