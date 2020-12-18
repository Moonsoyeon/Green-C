/*
	*****
	 ****
	  ***
	   **
		*
*/
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int x = 5; x >= i; x--)
		{
			printf("*");
		}
		printf("\n");
	}
}