/*
	n명의 학생
	n명 만큼 사용자에게 점수를 입력받고
	총점과 평균을 구해보세요

	그리고 50점 미만인 학생은 보충수업 대상자입니다.
	보충수업 대상자가 몇명인지도 알아보세요.
*/


#include <stdio.h>
#define ARR_LENGTH 7

int main(void)
{
	int arr[ARR_LENGTH];
	int num;
	for (int i = 0; i < ARR_LENGTH; i++)
	{
		arr[i] = scanf("%d", &num);
	}
	int sum = 0;
	for (int j = 0; j < ARR_LENGTH; j++)
	{
		sum = sum + arr[j];
	}
	printf("총점 : %d, 평균 : %d\n", sum, sum / ARR_LENGTH);
}