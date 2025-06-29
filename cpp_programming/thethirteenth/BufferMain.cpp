#include <iostream>
using namespace std;

template <typename T, int size>
class Buffer {
    T buf[size]; // 고정 크기 버퍼
public: 
    void set(int idx, const T& v) { buf[idx] = v; } // 버퍼에 값 설정
    T get(int idx) { return buf[idx]; } // 버퍼에서 값 가져오기
    int getSize() { return size; } // 버퍼 크기 반환
};

int main4()
{
    // 크기를 정수 상수로 명확히 지정해야 함
    Buffer<char, 128> buf1; // 크기가 128인 char 타입 버퍼 생성
    Buffer<double, 8> buf2; // 크기가 8인 double 타입 버퍼 생성

    buf1.set(0, 'X'); // 버퍼에 문자 X 설정
    buf2.set(0, 3.14); // 버퍼에 실수 3.14 설정

    cout << "buf1[0] = " << buf1.get(0) << ", size = " << buf1.getSize() << endl;
    cout << "buf2[0] = " << buf2.get(0) << ", size = " << buf2.getSize() << endl;

    // int n = 10;
    // Buffer<char, n> buf3; // n은 실행시 결정되기 때문에 컴파일 에러 발생
    return 0;
}