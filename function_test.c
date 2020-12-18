#include <stdio.h>

int sum_zero_to_user_input(void)
{
	int num;
	scanf("%d", &num);
	
	int sum = 0;
	for (int i = 0; i <= num; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int main(void)
{
	printf("%d\n", sum_zero_to_user_input());
}