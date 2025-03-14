/* 배열 */
//#include <stdio.h>
//
//int main()
//{
//	int ary[] = { 1, 2, 3 };
//
//	printf("배열의 전체크기: %d\n", sizeof(ary));
//	printf("배열 방한개의 크기: %d\n", sizeof(ary[0]));
//	printf("배열의 방의 갯수: %d\n", sizeof(ary) / sizeof(ary[1]));
//	printf("배열 이름: %p\n", ary);		// p: 변수의 메모리 주소 출력
//	printf("배열 첫 번째방 주소: %p\n", &ary[0]);	// &을 사용하는 이유: 배열의 첫 번째 원소의 메모리 주소를 가져오기 위해서, 그냥 ary[0]은 배열의 첫번째 원소 값 자체를 의미함.
//	printf("배열 두 번째방 주소: %p\n", ary + 1);	// 주소 값의 크기는 4바이트
//	printf("배열 두 번째방 주소: %p\n", &ary[1]);
//
//
//	return 0;
//}

// 다섯개의 정수를 입력받아서 합계 구하기

//#include <stdio.h>
//int main()
//{
//	int ary[5];
//	int sum = 0;
//
//	//합계
//	printf("다섯개의 정수를 입력하세요.: ");
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &ary[i]);
//		sum += ary[i];
//	}
//
//	// 평균
//	int score[5] = { 0, };
//	int size = sizeof(score) / sizeof(score[0]);

//	for (int i = 0; i < 5; i++) {
//		printf("점수를 입력하세요: ");
//		scanf_s("%d", &score[i]);
//	}
//
//	printf("입력한 정수의 합: %d\n", sum);
//	printf("평균: %d\n", size);
//
//	return 0;
//
//}
