#include<stdio.h>

void main() {
	int num, i, val;

	printf("Please enter a number: ");
	scanf_s("%d", &num);

	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			val = 0;
			break;
		}
		else {
			val = 1;
			continue;
		}
	}

	if (val == 1)
		printf("%d is a prime number\n", num);
	else
		printf("%d is not a prime number\n", num);

	return 0;
}