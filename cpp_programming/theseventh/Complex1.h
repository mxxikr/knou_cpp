class Complex1 {
    double rPart, iPart; // �Ǽ� �� �� ��� ��

public:
    // ������
    Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {} // ������ -> rPart�� iPart�� �ʱ�ȭ

    Complex1 conj() const { // Complex1 Ŭ������ �ӽ� ��ü�� ���� -> ���� ���� �� �Ҹ�
        return Complex1(rPart, -iPart); // �ӷ� ���Ҽ� ����
    }
    
    Complex1 add(const Complex1& c) const { // Complex1 Ŭ������ �ӽ� ��ü�� ���� -> ���� ���� �� �Ҹ�
        return Complex1(rPart + c.rPart, iPart + c.iPart); // �� ���Ҽ��� ���� ��ȯ
    }
    
    Complex1 sub(const Complex1& c) const { // Complex1 Ŭ������ �ӽ� ��ü�� ���� -> ���� ���� �� �Ҹ�
        return Complex1(rPart - c.rPart, iPart - c.iPart);  // �� ���Ҽ��� ���� ��ȯ
    }
    
    Complex1 mul(const Complex1& c) const; // �� ���Ҽ��� ���� ��ȯ
    
    Complex1 div(const Complex1& c) const; // �� ���Ҽ��� �������� ��ȯ
    
    void display() const; // ���Ҽ� ���� ���
};