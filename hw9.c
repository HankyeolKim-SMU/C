#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void clear(void) {
	while (getchar() != '\n');
}

typedef struct cityinform {
	char city[30];
	char country[30];
	int population;
}Cityinform;

int main(void) {
	Cityinform arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf("%[^\n]s", arr[i].city);
		clear();
		printf("Country> ");
		scanf("%[^\n]s", arr[i].country);
		clear();
		printf("Population> ");
		scanf("%d", &arr[i].population);
		clear();
	}
	printf("\n");

	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].city, arr[i].country, arr[i].population);
	}
	return 0;
}