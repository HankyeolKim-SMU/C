#include<stdio.h>

void recursive(int n) {
	int k;
	k = n % 2;
	if (n == 0) return;
	recursive(n / 2);
	printf("%d", k);
}

void main() {
	int num;
	printf("please enter a number: ");
	scanf_s("%d", &num);
	recursive(num);
}