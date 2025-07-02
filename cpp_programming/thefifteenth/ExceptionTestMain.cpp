#include <iostream>
#include <exception>
using namespace std;

// 사용자 정의 예외 클래스
class ExceptionClass : public exception {
public:
    const char* what() const noexcept override {
        return "ExceptionClass 발생";
    }
};

int f(int a) {
    cout << "f() 시작, a=" << a << endl;
    if (a < 0) {
        cout << "f()에서 예외 발생" << endl;
        throw ExceptionClass();
    }
    cout << "f() 정상 종료" << endl;
    return a * 2;
}

int g(int x) {
    cout << "g() 시작, x=" << x << endl;
    try {
        int result = f(x);
        cout << "g()에서 f() 정상 리턴받음: " << result << endl;
        return result + 1;
    }
    catch (ExceptionClass e) {
        cout << "g()에서 예외 캐치, what(): " << e.what() << endl;
        throw; // 예외 재던지기
    }
}

int h(int c) {
    cout << "h() 시작, c=" << c << endl;
    try {
        int result = g(c);
        cout << "h()에서 g() 정상 리턴받음: " << result << endl;
        return result + 1;
    }
    catch (ExceptionClass e) {
        cout << "h()에서 예외 캐치, what(): " << e.what() << endl;
        throw; // 예외 재던지기
    }
}

int main() {
    int num;
    cout << "음수면 예외 발생, 정수를 입력하시오: ";
    cin >> num;

    try {
        int result = h(num);
        cout << "main()에서 h() 정상 반환값 출력: " << result << endl;
    }
    catch (ExceptionClass e) {
        cout << "main()에서 최종 예외 캐치! what(): " << e.what() << endl;
    }

    cout << "프로그램 종료" << endl;
    return 0;
}