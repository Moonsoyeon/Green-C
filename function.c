#include <stdio.h>

void set_eight(int a)
{
	a = 8;
}

int main(void)
{
	/*printf("%d\n", add(3, 5));*/

	int a = 1;
	set_eight(a);
	printf("%d\n", a);

	return 0;
}