#include <stdio.h>

int main(void)
{
	int arr[5] = { 0, 10, 20, 30, 40 };
	int copy[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		copy[i] = arr[i];
	}
}