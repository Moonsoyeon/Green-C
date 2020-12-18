#include <stdio.h>

int main(void)
{
	int arr[2][3] = { {2,4,6}, {3,6,9} };

	printf("%d\n", arr[1][2]);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", arr[i][j]);
		}
	}
}
