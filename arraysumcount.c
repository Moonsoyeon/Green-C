#include <stdio.h>
#define LENGTH 5
int main(void)
{
	int arr[LENGTH];
	arr[0] = 30;
	arr[1] = 20;
	arr[2] = 50;
	arr[3] = 80;
	arr[4] = 40;

	int sum = 0;
	for (int i = 0; i <= 4; i++)
	{
		sum = sum + arr[i];
	}
	printf("%d", sum);

	int count = 0;
	for (int j = 0; j <= 4; j++)
	{
		if (arr[j] % 3 == 0)
		{
			count++;
		}
	}
	printf("\n%d", count);
}