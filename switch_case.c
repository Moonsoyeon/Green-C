#include <stdio.h>

int main(void)
{
	int i = 2;
	switch (i)
	{
	case 1: 
		printf("i�� 1�Դϴ�.\n");
	case 2:
		printf("i�� 2�Դϴ�.\n");
	case 3:
		printf("i�� 3�Դϴ�.\n");
	default:
		printf("i�� ???\n");
	}
	return 0;
}