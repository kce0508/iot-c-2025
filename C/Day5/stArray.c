//#include <stdio.h>
//
//typedef struct addr {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[100];
//} Addr;
//
//void print_list(Addr *list, int);
//
//int main()
//{
//	Addr list[3] = { 
//		{ "홍길동", 100, "010-123-1234", "몰라" },
//		{ "김철수", 33, "010-222-2222", "부산" },
//		{ "김영희", 24, "010-333-3333", "울산" }
//	};
//
//	int size = sizeof(list) / sizeof(list[0]);
//
//	print_list(list, size);
//
//	/*for (int i = 0; i < 3; i++) {
//		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}*/
//	return 0;
//}
//
//void print_list(Addr* list, int size) {
//	printf(" 주소록 목록 \n");
//	for (int i = 0; i < 3; i++) {
//		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//}
//구조체 배열을 출력하는 함수