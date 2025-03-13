/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/
#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    // 사용자 입력 받기
    printf("첫 번째 숫자를 입력하세요: ");
    scanf_s("%lf", &num1);

    printf("연산자를 입력하세요 (+, -, *, /): ");
    scanf_s(" %c", &op);  // 앞에 공백을 넣어야 개행 문자를 무시할 수 있음

    printf("두 번째 숫자를 입력하세요: ");
    scanf_s("%lf", &num2);

    // 연산 수행
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
            printf("오류: 0으로 나눌 수 없습니다.\n");
            return 1;
        }
        break;
    default:
        printf("오류: 잘못된 연산자입니다.\n");
        return 1;
    }

    // 결과 출력
    printf("결과: %.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);

    return 0;
}


//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}

	/*int result = func(10, 20);
	printf("호출 후 리턴된 값: %d\n", result);*/

int main()
{
    char op;
    printf("계산기 프로그램입니다.\n");
    printf("두개의 정수를 입력하세요.\n");
    printf("연산자를 입력하세요.\n");
    scanf_s("%c", &op, sizeof(op));
    scanf_s("%c", &op);

}