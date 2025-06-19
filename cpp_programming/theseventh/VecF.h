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

// ���� ������ ���
class VecF {
    int n;
    float* arr;
public:
    VecF(int d, const float* a = nullptr) : n{ d } { // Ÿ�� ������
        arr = new float[n];
        if (a) memcpy(arr, a, sizeof(float) * n);
    }

    VecF(const VecF& fv) : VecF(fv.n, fv.arr) {} // ���� ������
};