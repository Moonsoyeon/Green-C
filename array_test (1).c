#include <stdio.h>

int main(void)
{
	int a[4];
	a[0] = 0;
	a[1] = 10;
	a[2] = 20;
	a[3] = 30;

	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);

	int b[4];
	for (int i = 0; i < 4; i++)
	{
		b[i] = i * 10;
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", b[i]);
	}

	int c[4] = { 0, 10, 20, 30 };
}