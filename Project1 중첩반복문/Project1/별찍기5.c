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
		for (k = 0; k < 2 * (num-1- i)-1; k++) //아래쪽 피라미드는 num에 -1을 한 숫자여야 하고, 거꾸로 나와야 하므로 i를 빼야 하는데 숫자는 홀수로 나오니 2x-1로 한다. 
		{
			printf("*");
		}

		printf("\n"); 
	}


	return 0; 
}



//github 사용해주면 좋다. 