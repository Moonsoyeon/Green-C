#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	if (num == 2)
	{
		printf("�Ҽ��Դϴ�.");
		return 0;
	}

	for (int i = 2; i < num; i++)
	{	
		if (num % i == 0)
		{
			printf("�Ҽ��� �ƴմϴ�.");
			return 0;
		}
	}
	printf("�Ҽ��Դϴ�.");
}