#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int i, j, k,l; 
	scanf("%d", &i);

	for (j = 0; j < i; j++)
	{
		for (k = 1; k < (i-j); k++)
		{
			printf(" ");
			
		}

		
		for (l = 0; l <= j; l++)
		{
			printf("*");

		}	
			

		printf("\n"); 
	}
	return 0; 
}