#include <stdio.h>

int main(void)
{
	int arr[3][4] = { 0 };
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			count++;
			arr[i][j] = count;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}