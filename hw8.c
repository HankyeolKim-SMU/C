#include<stdio.h>

int putchar(int c);
int fputc(int c, FILE* stream);
int getchar(void);
int fgetc(FILE* stream);
int puts(const char* s);
int fputs(const char* s, FILE* stream);
char* fgets(char* s, int n, FILE* stream);

void change(char s[]) {
	const int diff = 'a' - 'A'; //���ĺ� ��ҹ��� ������ ���� ��� ���ĺ��� ����
	int i;
	int len = strlen(s); //�Է¹��� ���ڿ� s�� ����

	for (i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') //���ڿ��� ���ڰ� �빮�ڸ�
			s[i] = s[i] + diff; // �ҹ��ڷ� �ٲ���
		else if (s[i] >= 'a' && s[i] <= 'z')// ���ڿ��� ���ڰ� �ҹ��ڸ�
			s[i] = s[i] - diff; // diff��ŭ ���ؼ� �빮�ڷ� �ٲ���
		else // �빮�ڵ� �ҹ��ڵ� �ƴϸ�?
			continue;// �ٲ��ʿ� ������ �ѱ��
	}
}

void RemoveEnter(char str[]) { 
	//���ڿ� ���� ���๮�ڸ� 0���� �ٲ㼭 �����ִ� �Լ�
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