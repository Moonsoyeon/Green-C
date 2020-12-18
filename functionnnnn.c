#include <stdio.h>

int plus(int x, int y) 
{
	return x + y;
}

int minus(int x, int y)
{	
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int nanugi(int x, int y)
{
	return x / y;
}

int main(void)
{
	printf("%d\n", plus(5, 3));
	printf("%d\n", minus(5, 3));
	printf("%d\n", nanugi(6, 2));
	printf("%d\n", multiply(5, 3));
}