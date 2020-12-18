#include <stdio.h>

int user_input(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

int sum_sum(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	return sum;
}

int sum_to_num(int num)
{
	int sum = 0;

	for (int i = 0; i <= num; i++)
	{
		sum = sum + i;
	}
	return sum;
}

void num_to_sum(void)
{
	printf("n까지의합, n을 입력하세요\n");
	int num = user_input();

	printf("1. 그냥 합, 2. 짝수 합\n");
	int menu = user_input();
	
	int sum = 0;
	if (menu == 1)
	{
		sum = sum_to_num(num);
	}
	else if (menu == 2)
	{
		sum = sum_sum(num);
	}
	else
	{
		printf("메뉴를 잘못입력하셨습니다.");
	}
	printf("합 : %d\n", sum);
}

int main(void)
{
	num_to_sum();
}