#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	printf("첫 번째 숫자 : ");
	fflush(stdout);
	scanf("%d", &a);
	printf("두 번재 숫자 : ");
	fflush(stdout);
	scanf("%d", &b);
	
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
}