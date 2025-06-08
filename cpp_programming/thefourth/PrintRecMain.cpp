#include <iostream>
using namespace std;
#include <chrono> // 시간 측정을 위한 헤더 파일

// SalesRec 구조체 정의
struct SalesRec {
    char pID[10];
    int dYear, dMonth, dDate;
    char deliverAddr[40];
}; // 62바이트(64바이트)

void PrSalesRec64byte(SalesRec srec) // 64바이트 복사
{
    cout << "품목코드 : " << srec.pID << endl;
    cout << "배달일자 : " << srec.dYear << "년 ";
    cout << srec.dMonth << "월 ";
    cout << srec.dDate << "일" << endl;
    cout << "배달주소 : " << srec.deliverAddr << endl;
}

void PrSalesRec4byte(SalesRec& srec) // 4바이트 복사
{
    cout << "품목코드 : " << srec.pID << endl;
    cout << "배달일자 : " << srec.dYear << "년 ";
    cout << srec.dMonth << "월 ";
    cout << srec.dDate << "일" << endl;
    cout << "배달주소 : " << srec.deliverAddr << endl;
}

void PrSalesRecProtect(const SalesRec& srec) // srec 보호
{
    cout << "품목코드 : " << srec.pID << endl;
    cout << "배달일자 : " << srec.dYear << "년 ";
    cout << srec.dMonth << "월 ";
    cout << srec.dDate << "일" << endl;
    cout << "배달주소 : " << srec.deliverAddr << endl;
}

int main5()
{
	SalesRec srec; // SalesRec 구조체 변수 선언

	// 구조체 멤버에 값 대입
	cout << "품목코드 : ";
	cin >> srec.pID;
	cout << "배달일자(년, 월, 일) : ";
	cin >> srec.dYear >> srec.dMonth >> srec.dDate;
	cout << "배달주소 : ";
	cin.ignore(); // 개행 문자 제거
	cin.getline(srec.deliverAddr, 40);

	// 구조체 변수의 내용을 출력
    // 함수 호출 시간 측정 추가
    cout << "=== 64바이트 복사 ===" << endl;
    auto start64 = chrono::high_resolution_clock::now();
	PrSalesRec64byte(srec); // 64바이트 복사
    auto end64 = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> duration64 = end64 - start64;
    cout << "소요 시간(64바이트 복사): " << duration64.count() << " ms" << endl; // 구조체 전체를 함수 호출할 때마다 복사하기 때문에 시간 소요 큼

    cout << "=== 4바이트 복사 ===" << endl;
    auto start4 = chrono::high_resolution_clock::now();
    PrSalesRec4byte(srec); // 4바이트 복사
    auto end4 = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> duration4 = end4 - start4;
    cout << "소요 시간(4바이트 복사): " << duration4.count() << " ms" << endl;
    
    cout << "=== srec 보호 ===" << endl;
    auto startProtect = chrono::high_resolution_clock::now();
    PrSalesRecProtect(srec); // srec 보호
    auto endProtect = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> durationProtect = endProtect - startProtect;
    cout << "소요 시간(srec 보호): " << durationProtect.count() << " ms" << endl;

	return 0;
}