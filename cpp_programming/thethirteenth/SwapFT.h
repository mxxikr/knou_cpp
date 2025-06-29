#ifndef SWAP_FUNCTION_TEMPLATE_H_INCLUDED
#define SWAP_FUNCTION_TEMPLATE_H_INCLUDED

#include <utility> // for std::move

template <typename ANY> 
void swapFT(ANY& a, ANY& b) // 템플릿 함수로 두 변수의 값을 교환
{
    ANY temp = std::move(a); // 이동 대입 연산자가 필요함
    a = std::move(b); // b의 값을 a로 이동
    b = std::move(temp); // temp의 값을 b로 이동
}

#endif // SWAP_FUNCTION_TEMPLATE_H_INCLUDED