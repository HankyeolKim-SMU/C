#include <stdio.h>

void main()
{
	int num1, num2;
	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
}