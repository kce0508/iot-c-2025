//#include <stdio.h>
//
//struct profile				// profile 구조체 선언
//{
//	int age;
//	double height;
//	double weight;
//};
//struct student				// student 구조체 선언
//{
//	struct profile pf;		// profile 구조체 포함(중첩 구조체)
//	int id;
//	double grade;
//
//};
//int main()
//{
//	struct student s;		// student 구조체 변수 선언
//	// 구조체 멤버 값 초기화
//	s.grade = 99;
//	s.id = 201212;
//	s.pf.age = 20;
//	s.pf.height = 180;
//	s.pf.weight = 60;
//
//	// 출력(중첩 구조체 멤버 접근)
//	printf("키: %.1lf\n", s.pf.height);
//	printf("몸무게: %.1lf\n", s.pf.weight);
//
//	return 0;
//}