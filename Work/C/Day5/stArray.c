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
//		{ "ȫ�浿", 100, "010-123-1234", "����" },
//		{ "��ö��", 33, "010-222-2222", "�λ�" },
//		{ "�迵��", 24, "010-333-3333", "���" }
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
//	printf(" �ּҷ� ��� \n");
//	for (int i = 0; i < 3; i++) {
//		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//}
//����ü �迭�� ����ϴ� �Լ�