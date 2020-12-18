#include <stdio.h>

int main(void)
{
	char str[5] = { 'O', 'X', 'X', 'O', 'X'};
	char answer[5] = { 'O', 'O', 'X', 'O', 'X' };
	int score = 0;

	for (int i = 0; i < 5; i++)
	{
		if (str[i] == answer[i])
		{
			score = score + 10;
		}
	}
	printf("รัมก : %d", score);
}