#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int i, k, l,m; 

	scanf("%d", &i); 

	

	for (k = 0; k < i; k++)
	{
		for (l = 1; l < (i - k); l++)
		{
			printf(" "); 
		}

		for (m = 0; m < 2*k+1; m++)
		{
			printf("*");
		}

		printf("\n"); 

	}



	return 0; 
}