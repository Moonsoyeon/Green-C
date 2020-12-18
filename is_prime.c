#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	if (num == 2)
	{
		printf("소수입니다.");
		return 0;
	}

	for (int i = 2; i < num; i++)
	{	
		if (num % i == 0)
		{
			printf("소수가 아닙니다.");
			return 0;
		}
	}
	printf("소수입니다.");
}