#include<stdio.h>

void print_hello(void)
{
	printf("Hello ");
}

void print_world(void)
{
	printf("World\n");
}
int main(void)
{
	print_hello();
	print_world();
	print_hello();
	print_world();
}