#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int N = 0;
	scanf("%d", &N); 


	if (N < 0)
	{
		printf("cold,\n indoor");
	}

	if (N >= 0 && N<40)
	{
		printf("moderate,\n outdoor");

	}

	if (N >= 40)
		printf("hot,\n indoor"); 

	return 0;

}



