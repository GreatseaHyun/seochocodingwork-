#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, M; 
	int M2; 


	scanf("%d", &N); 

	scanf("%d", &M); 

	
	if (N == M)
	{
		printf("RIGHT");

	}

	else if (N > M)
	{
		printf("UP\n");

		scanf("%d", &M2);

		if (N == M2)
		{
			printf("RIGHT");
		}

		else if (N > M2)
		{
			printf("UP");
		}

		else
		{
			printf("DOWN");
		}

	}

	
	else
	{
		printf("DOWN\n");

		scanf("%d", &M2);

		if (N == M2)
		{
			printf("RIGHT");
		}

		else if (N > M2)
		{
			printf("UP");
		}

		else
		{

			printf("DOWN");
		}
	}

	return 0;
}