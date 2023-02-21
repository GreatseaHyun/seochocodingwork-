#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int a= 1;
	int b = 1;
	int num;
	int tmp1;
	

	scanf("%d", &num);

	printf("%d\n",b);


	while (num > a)
	{
		
		a++; 

		tmp1 = b; 

		
		printf("%d\n", b);
		b = b + tmp1; 
		
	}

	return 0;
}