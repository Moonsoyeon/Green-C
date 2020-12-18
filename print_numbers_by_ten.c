#include <stdio.h>

void asdf(void)
{
	for (int i = 0; i <= 99; i++)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%d ", i);
	}
}

int main(void)
{
	asdf();
}