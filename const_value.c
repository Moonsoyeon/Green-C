#include <stdio.h>

int main(void)
{
	const double PI = 3.14; // const : pi를 수정할 수 없게됨.
	int r = 5;

	printf("%lf\n", r*r*pi);
}