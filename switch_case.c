#include <stdio.h>

int main(void)
{
	int i = 2;
	switch (i)
	{
	case 1: 
		printf("i는 1입니다.\n");
	case 2:
		printf("i는 2입니다.\n");
	case 3:
		printf("i는 3입니다.\n");
	default:
		printf("i는 ???\n");
	}
	return 0;
}