#ifndef PENCILS_H_INCLUDED
#define PENCILS_H_INCLUDED

class Pencils {
    int dozens;   // Ÿ
    int np;       // ����
public:
	Pencils() : dozens(0), np(0) {}; // �⺻ ������
    Pencils(int n)
    {
		dozens = n / 12; np = n % 12; 
    }
	Pencils(int d, int n) : dozens(d), np(n) {} // �Ű� ���� ������
    Pencils& operator ++ ();      // ++ ������(���� ǥ��)
    Pencils operator ++(int);     // ++ ������(���� ǥ��)
	void display() const; // ���� ���� ���
};

#endif