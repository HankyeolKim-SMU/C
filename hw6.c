#include<stdio.h>

void main() {
	int arr1[6] = { 1,2,3,4,5,6 }; //���̰� 6�� int�� �迭 arr1 ����
	int arr2[6] = { 7,8,9,10,11,12 }; //���̰� 6�� int�� �迭 arr2 ����

	int i, temp; //�ݺ������� ����� int�� ���� i�� ������ �������� ���� ��ȯ�Ҷ� �� temp ����
	int* ptr1 = arr1; //������ ���� ptr1�� �����԰� ���ÿ� �迭 arr1�� ù��° ��Ҹ� ����Ű�� ��
	int* ptr2 = arr2; //������ ���� ptr2�� �����԰� ���ÿ� �迭 arr2�� ù��° ��Ҹ� ����Ű�� ��
	
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
		*ptr2 = temp; //ptr1�� ptr2�� ���� ��ȯ.

		*ptr1++; //int�� ������ ���� ptr1�� ���� 1 ������Ŵ���ν� �ּҰ��� 4�� ������ ��Ȯ�� int�� �迭 arr1�� ���� ��Ҹ� ����Ű�� �ȴ�.
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