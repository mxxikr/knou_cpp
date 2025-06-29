#ifndef SWAP_FUNCTION_TEMPLATE_H_INCLUDED
#define SWAP_FUNCTION_TEMPLATE_H_INCLUDED

#include <utility> // for std::move

template <typename ANY> 
void swapFT(ANY& a, ANY& b) // ���ø� �Լ��� �� ������ ���� ��ȯ
{
    ANY temp = std::move(a); // �̵� ���� �����ڰ� �ʿ���
    a = std::move(b); // b�� ���� a�� �̵�
    b = std::move(temp); // temp�� ���� b�� �̵�
}

#endif // SWAP_FUNCTION_TEMPLATE_H_INCLUDED