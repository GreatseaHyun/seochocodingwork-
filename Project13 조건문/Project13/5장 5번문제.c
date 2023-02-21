#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int i;
	scanf("%d", &i);

	if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
		printf("A");


	else if (i % 2 == 0 && i % 3 == 0)
		printf("B");

	else if (i % 2 == 0 && i % 5 == 0)
		printf("C");

	else if (i % 3 == 0 && i % 5 == 0)
		printf("D");

	else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
		printf("E");

	else
		printf("N"); 

	return 0;
}