#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num;
	int i, j, k; 

	scanf("%d", &num); 

	for (i = 0; i < num; i++)
	{
		for (j = 1; j < (num - i); j++)
		{
			printf(" "); 
		}

		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (i = 0; i < num-1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * (num-1- i)-1; k++) //�Ʒ��� �Ƕ�̵�� num�� -1�� �� ���ڿ��� �ϰ�, �Ųٷ� ���;� �ϹǷ� i�� ���� �ϴµ� ���ڴ� Ȧ���� ������ 2x-1�� �Ѵ�. 
		{
			printf("*");
		}

		printf("\n"); 
	}


	return 0; 
}



//github ������ָ� ����. 