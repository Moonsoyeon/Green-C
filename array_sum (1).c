/*
	n���� �л�
	n�� ��ŭ ����ڿ��� ������ �Է¹ް�
	������ ����� ���غ�����

	�׸��� 50�� �̸��� �л��� ������� ������Դϴ�.
	������� ����ڰ� ��������� �˾ƺ�����.
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
	printf("���� : %d, ��� : %d\n", sum, sum / ARR_LENGTH);
}