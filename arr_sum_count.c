#include <stdio.h>
#define LENGTH 5

int main(void)
{
	char a = 65;
	printf("%c\n", a);
	printf("%d\n", a);

	char arr[LENGTH] = { 15, 'A', 77, 'C', 80 };
	int sum = 0;
	for (int i = 0; i < LENGTH; i++)
	{
		sum = sum + (int)arr[i];
	}
	printf("%d", sum);
	for (int j = 0; j < LENGTH; j++)
	{
		printf("%c\n", arr[j]);
	}
}