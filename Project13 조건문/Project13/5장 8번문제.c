#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int N;
	scanf("%d", &N);

	if (N % 400 == 0 && N % 4 == 0 && N % 100==0)
	{
		printf("leap year");

	}

	else if (N % 4 == 0 && N % 100==0)
	{
		printf("common year");
	}

	else if (N % 4 == 0)
	{
		printf("leap year");

	}

	else
	{
		printf("common year");
	}
	return 0; 
}