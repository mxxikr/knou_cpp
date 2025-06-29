typedef int INT_ITEM; // 스택에 저장할 자료형 정의
class StackInt { // 스택 클래스 정의
public:
    enum { MAXSTACK = 20 }; // 스택의 최대 크기 정의
    int top; // 스택의 top 인덱스
    INT_ITEM item[MAXSTACK]; // 스택에 저장할 자료형을 위한 배열
public:
    StackInt(); // 생성자
    bool empty() const; // 스택이 비어있는지 확인 
    bool full() const; // 스택이 가득 찼는지 확인
    void initialize(); // 스택 초기화
    void push(INT_ITEM s); // 스택에 아이템 추가
    INT_ITEM pop(); // 스택에서 아이템 제거
};