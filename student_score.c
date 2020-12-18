#include <stdio.h>

void score(void)
{
	int kor, eng, math;
	scanf("%d %d %d", &kor, &eng, &math);
	int sum = kor + eng + math;
	printf("총합 점수 : %d , 평균 : %d\n", sum, sum / 3);

	if (sum >= 250)
	{
		printf("등급 : A");
	}
	else if (sum >= 200)
	{
		printf("등급 : B");
	}
	else if (sum >= 150)
	{
		printf("등급 : C");
	}
	else
	{
		printf("등급 : F");
	}
}

int main(void)
{
	score();
}