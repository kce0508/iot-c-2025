/*
	�Լ� ����
	�Լ� ����, �Լ� ȣ��, �Լ� ����
*/
#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    // ����� �Է� �ޱ�
    printf("ù ��° ���ڸ� �Է��ϼ���: ");
    scanf_s("%lf", &num1);

    printf("�����ڸ� �Է��ϼ��� (+, -, *, /): ");
    scanf_s(" %c", &op);  // �տ� ������ �־�� ���� ���ڸ� ������ �� ����

    printf("�� ��° ���ڸ� �Է��ϼ���: ");
    scanf_s("%lf", &num2);

    // ���� ����
    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else {
            printf("����: 0���� ���� �� �����ϴ�.\n");
            return 1;
        }
        break;
    default:
        printf("����: �߸��� �������Դϴ�.\n");
        return 1;
    }

    // ��� ���
    printf("���: %.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);

    return 0;
}


//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}

	/*int result = func(10, 20);
	printf("ȣ�� �� ���ϵ� ��: %d\n", result);*/

int main()
{
    char op;
    printf("���� ���α׷��Դϴ�.\n");
    printf("�ΰ��� ������ �Է��ϼ���.\n");
    printf("�����ڸ� �Է��ϼ���.\n");
    scanf_s("%c", &op, sizeof(op));
    scanf_s("%c", &op);

}