#include <cstring>

//class VecF {
//    int n;
//    float* arr;
//public:
//    VecF(int d, const float* a = nullptr) : n{ d } {
//        arr = new float[d];
//        if (a) memcpy(arr, a, sizeof(float) * n);
//    }
//    VecF(const VecF& fv) : n{ fv.n } {
//        arr = new float[n];
//        memcpy(arr, fv.arr, sizeof(float) * n);
//    }
//};

// 위임 생성자 사용
class VecF {
    int n;
    float* arr;
public:
    VecF(int d, const float* a = nullptr) : n{ d } { // 타겟 생성자
        arr = new float[n];
        if (a) memcpy(arr, a, sizeof(float) * n);
    }

    VecF(const VecF& fv) : VecF(fv.n, fv.arr) {} // 위임 생성자
};