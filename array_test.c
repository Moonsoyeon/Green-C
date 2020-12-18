#include <stdio.h>

int main(void)
{
	int arr[5] = { 30, 44, 52, 93, 20 };
	int n = 0;
	
	for (int i = 0; i < 5; i++)
	{
		if(arr[i] >= n)
		{
			printf("%d\n", arr[i]);
		}
		n = arr[i];
	}
}