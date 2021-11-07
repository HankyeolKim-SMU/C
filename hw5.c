#include<stdio.h>

void main() {
	int arr[5];
	printf("5개의 정수를 입력하세요: ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("홀수 출력: ");
	for (int k = 0; k < sizeof(arr) / sizeof(int); k++) {
		if (arr[k] % 2 == 1) {
			printf("%d ", arr[k]);
		}
	}
	printf("\n");
	printf("짝수 출력: ");
	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		if (arr[j] % 2 == 0) {
			printf("%d ", arr[j]);
		}
	}
}