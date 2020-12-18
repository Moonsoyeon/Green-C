#include <stdio.h>

int a = 15;

void plus_one_a(void)
{
	a++;
}

int main(void)
{
	plus_one_a();
	plus_one_a();
	plus_one_a();
	plus_one_a();
	printf("%d\n", a);
}