#ifndef BASEC_H
#define BASEC_H

class BaseC {
private:
    int a;
protected:
    int b;
public:
    int c;
    int geta() const {
        return a;
    }
    void set(int x, int y, int z) {
        a = x; b = y; c = z;
    }
};

#endif // BASEC_H