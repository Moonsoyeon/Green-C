#include <stdio.h>

void score(void)
{
	int kor, eng, math;
	scanf("%d %d %d", &kor, &eng, &math);
	int sum = kor + eng + math;
	printf("���� ���� : %d , ��� : %d\n", sum, sum / 3);

	if (sum >= 250)
	{
		printf("��� : A");
	}
	else if (sum >= 200)
	{
		printf("��� : B");
	}
	else if (sum >= 150)
	{
		printf("��� : C");
	}
	else
	{
		printf("��� : F");
	}
}

int main(void)
{
	score();
}