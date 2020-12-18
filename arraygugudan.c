#define GUGUDAN 9
#include <stdio.h>

int main(void)
{
	int two_dan[GUGUDAN];
	for (int i = 0; i < GUGUDAN; i++)
	{
		two_dan[i] = (i + 1) * 2;
		printf("%d ", two_dan[i]);
	}

	char str_hello[12] = { "HELLO" };
	str_hello[0] = 'Q';
	printf("\n%s\n", str_hello);

	char input[12];
	scanf("\n%s", &input);
	printf("ют╥б : %s", input);
}