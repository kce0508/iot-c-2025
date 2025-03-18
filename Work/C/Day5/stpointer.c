/*
	구조체 포인터: 
*/
//#include <stdio.h>
//// Score 구조체 정의
//typedef struct score {
//	int kor;
//	int eng;
//	int mat;
//} Score;
//
//int main()
//{
//	Score s = { 100, 80, 85 };	// Score 구조체 변수 s 선언 및 초기화
//	Score* ps = &s;				// 변수 s의 주소를 ps 포인터에 저장
//
//
//	printf("국어: %d\n", ps->kor);
//	printf("영어: %d\n", ps->eng);
//	printf("수학: %d\n", (*ps).mat);
//	//printf("수학: %d\n", ps->mat);		// (*ps). = ps->
//
//	return 0;
//}
/*
	구조체 변수를 통해서 멤버에 접근하는 방법: .(멤버 접근 연산자)
	구조체 포인터를 통해서 멤버에 접근하는 방법: ->(화살표 연산자, 애로우 연산자)
*/