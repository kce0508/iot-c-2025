//#include <stdio.h>
//
//struct profile				// profile ����ü ����
//{
//	int age;
//	double height;
//	double weight;
//};
//struct student				// student ����ü ����
//{
//	struct profile pf;		// profile ����ü ����(��ø ����ü)
//	int id;
//	double grade;
//
//};
//int main()
//{
//	struct student s;		// student ����ü ���� ����
//	// ����ü ��� �� �ʱ�ȭ
//	s.grade = 99;
//	s.id = 201212;
//	s.pf.age = 20;
//	s.pf.height = 180;
//	s.pf.weight = 60;
//
//	// ���(��ø ����ü ��� ����)
//	printf("Ű: %.1lf\n", s.pf.height);
//	printf("������: %.1lf\n", s.pf.weight);
//
//	return 0;
//}