#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	printf("ù ��° ���� : ");
	fflush(stdout);
	scanf("%d", &a);
	printf("�� ���� ���� : ");
	fflush(stdout);
	scanf("%d", &b);
	
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
}