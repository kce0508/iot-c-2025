/*
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>		// 동적 메모리 할당을 위한 헤더
//// 구조체 정의
//struct mystruct {
//	char name[20];
//	int age;
//	double height;
//	char* str;			// 동적 문자열 저장을 위한 포인터
//};
//
//int main()
//{
//	struct mystruct s;		// mystruct 구조체 변수 선언
//	strcpy(s.name, "김채은");	// 문자열 복사(이름 저장)
//	s.age = 28;
//	s.height = 158;
//	s.str = (char*)malloc(sizeof(100));
//
//	printf("인사말: ");
//	gets(s.str);
//
//	printf("이름: %s\n", s.name);
//	printf("나이: %d\n", s.age);
//	printf("키: %.1lf\n", s.height);
//	printf("인사말: %s\n", s.str);
//
//	free(s.str);			// 동적 메모리 해제
//
//	return 0;
//};