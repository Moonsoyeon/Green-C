#include <stdio.h>
int main(void)
{
	int num=0;
	scanf("%d", &num);
	
	printf("�Է��� ���ڴ� : %d\n", num);
	
	printf("++num : %d\n", ++num);
	printf("num++ : %d\n", num++);
	printf("num : %d\n", num);
	
	num--;
	printf("num-- : %d\n", num);
}