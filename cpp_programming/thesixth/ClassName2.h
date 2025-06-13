class ClassName2 {

// 이동 생성자의 선언 형식
public:
	ClassName2(ClassName2&& obj) { // r value 참조한 이동 생성자
		// 생성되는 객체에 obj의 내용을 이동하는 처리
	}
};