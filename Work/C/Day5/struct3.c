/*
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>		// ���� �޸� �Ҵ��� ���� ���
//// ����ü ����
//struct mystruct {
//	char name[20];
//	int age;
//	double height;
//	char* str;			// ���� ���ڿ� ������ ���� ������
//};
//
//int main()
//{
//	struct mystruct s;		// mystruct ����ü ���� ����
//	strcpy(s.name, "��ä��");	// ���ڿ� ����(�̸� ����)
//	s.age = 28;
//	s.height = 158;
//	s.str = (char*)malloc(sizeof(100));
//
//	printf("�λ縻: ");
//	gets(s.str);
//
//	printf("�̸�: %s\n", s.name);
//	printf("����: %d\n", s.age);
//	printf("Ű: %.1lf\n", s.height);
//	printf("�λ縻: %s\n", s.str);
//
//	free(s.str);			// ���� �޸� ����
//
//	return 0;
//};