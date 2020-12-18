#include<stdio.h>

int main(void)
{
	int a = 10;
	
	a += 33; // a = a + 33
	printf("%d\n", a);
	
	a -= 3; // a = a - 3
	printf("%d\n", a);
	
	a *= 2; // a = a * 2
	printf("%d\n", a);
	
	a /= 10; // a = a / 10
	printf("%d\n", a);
	
	a %= 3; // a = a % 3
	printf("%d\n", a);
}