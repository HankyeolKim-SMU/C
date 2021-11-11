#include<stdio.h>

void main() {
	int arr1[6] = { 1,2,3,4,5,6 }; //길이가 6인 int형 배열 arr1 선언
	int arr2[6] = { 7,8,9,10,11,12 }; //길이가 6인 int형 배열 arr2 선언

	int i, temp; //반복문에서 사용할 int형 변수 i와 포인터 변수들의 값을 교환할때 쓸 temp 선언
	int* ptr1 = arr1; //포인터 변수 ptr1를 선언함과 동시에 배열 arr1의 첫번째 요소를 가리키게 함
	int* ptr2 = arr2; //포인터 변수 ptr2를 선언함과 동시에 배열 arr2의 첫번째 요소를 가리키게 함
	
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	printf("arr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	printf("\n\n");

	for (i = 0; i < 6; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp; //ptr1과 ptr2의 값을 교환.

		*ptr1++; //int형 포인터 변수 ptr1의 값을 1 증가시킴으로써 주소값은 4가 증가해 정확히 int형 배열 arr1의 다음 요소를 가리키게 된다.
		*ptr2++;
	}
	printf("after swap\n");
	
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	printf("arr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	printf("\n");

}