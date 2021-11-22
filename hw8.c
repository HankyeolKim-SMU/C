#include<stdio.h>

int putchar(int c);
int fputc(int c, FILE* stream);
int getchar(void);
int fgetc(FILE* stream);
int puts(const char* s);
int fputs(const char* s, FILE* stream);
char* fgets(char* s, int n, FILE* stream);

void change(char s[]) {
	const int diff = 'a' - 'A'; //알파벳 대소문자 끼리의 차는 모든 알파벳이 같음
	int i;
	int len = strlen(s); //입력받은 문자열 s의 길이

	for (i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') //문자열의 문자가 대문자면
			s[i] = s[i] + diff; // 소문자로 바꿔줌
		else if (s[i] >= 'a' && s[i] <= 'z')// 문자열의 문자가 소문자면
			s[i] = s[i] - diff; // diff만큼 더해서 대문자로 바꿔줌
		else // 대문자도 소문자도 아니면?
			continue;// 바꿀필요 없으니 넘긴다
	}
}

void RemoveEnter(char str[]) { 
	//문자열 끝의 개행문자를 0으로 바꿔서 없애주는 함수
	int len = strlen(str);
	str[len - 1] = 0;
}


void main() {
	char str[50];

	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	
	RemoveEnter(str);
	change(str);
	
	printf("Output> ");
	fputs(str, stdout);
}