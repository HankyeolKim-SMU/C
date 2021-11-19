#include<stdio.h>
#include<math.h>

void StanDevi(double* param) {
	double stdb, avg;
	int i;
	double sum = 0, sum2 = 0;

	for (i = 0; i < 5; i++) {
		sum += param[i];
	}
	
	avg = sum / 5;
	
	for (i = 0; i < 5; i++) {
		sum2 += pow(param[i] - avg, 2);
	}
	
	stdb = sum2 / 5;
	
	printf("Standard Deviation = %.3f\n", sqrt(stdb));
}

void main() {
	double arr[5];
	
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%lf", &arr[i]);
	}
	StanDevi(arr);
}