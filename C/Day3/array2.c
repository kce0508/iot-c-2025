/* �迭 */
//#include <stdio.h>
//
//int main()
//{
//	int ary[] = { 1, 2, 3 };
//
//	printf("�迭�� ��üũ��: %d\n", sizeof(ary));
//	printf("�迭 ���Ѱ��� ũ��: %d\n", sizeof(ary[0]));
//	printf("�迭�� ���� ����: %d\n", sizeof(ary) / sizeof(ary[1]));
//	printf("�迭 �̸�: %p\n", ary);		// p: ������ �޸� �ּ� ���
//	printf("�迭 ù ��°�� �ּ�: %p\n", &ary[0]);	// &�� ����ϴ� ����: �迭�� ù ��° ������ �޸� �ּҸ� �������� ���ؼ�, �׳� ary[0]�� �迭�� ù��° ���� �� ��ü�� �ǹ���.
//	printf("�迭 �� ��°�� �ּ�: %p\n", ary + 1);	// �ּ� ���� ũ��� 4����Ʈ
//	printf("�迭 �� ��°�� �ּ�: %p\n", &ary[1]);
//
//
//	return 0;
//}

// �ټ����� ������ �Է¹޾Ƽ� �հ� ���ϱ�

//#include <stdio.h>
//int main()
//{
//	int ary[5];
//	int sum = 0;
//
//	//�հ�
//	printf("�ټ����� ������ �Է��ϼ���.: ");
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &ary[i]);
//		sum += ary[i];
//	}
//
//	// ���
//	int score[5] = { 0, };
//	int size = sizeof(score) / sizeof(score[0]);

//	for (int i = 0; i < 5; i++) {
//		printf("������ �Է��ϼ���: ");
//		scanf_s("%d", &score[i]);
//	}
//
//	printf("�Է��� ������ ��: %d\n", sum);
//	printf("���: %d\n", size);
//
//	return 0;
//
//}
