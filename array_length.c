#include <stdio.h>

int main(void)
{
	printf("%d\n", sizeof(int));

	int a[] = { 0, 10, 20, 30, 40, 50, 60 };
	printf("%d\n", sizeof(a));
	printf("length : %d", sizeof(a) / sizeof(a[0]));
	
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d\n", a[i]);
	}
}