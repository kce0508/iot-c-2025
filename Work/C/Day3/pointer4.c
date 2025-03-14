/*
	swap
*/
//#include <stdio.h>
//
//void swap(int* , int*);		// * 간접참조 연산자
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("호출 전 a: %d, b: %d\n", a, b);
//
//	swap(&a, &b);		// a, b의 값을 쓸 수 있도록 &써줌
//	printf("호출 후 a: %d, b: %d\n", a, b);
//
//	return 0;
//}
//void swap(int *pa, int *pb)		// a = 10, b = 20
//{
//	int temp;
//	temp = *pa;		// temp = 10
//	*pa = *pb;			// a = 20
//	*pb = temp;		// b = 10
//
//}
