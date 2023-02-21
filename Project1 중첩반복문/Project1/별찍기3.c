#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j,k; 

	scanf("%d", &i); 

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < (i - j); k++)
		{
			printf("*");
		}
		printf("\n"); 
	}

	return 0; 
}