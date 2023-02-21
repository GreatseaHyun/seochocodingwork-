#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int money;
	int menu; 
	int change;
	int obak;
	int bak; 

	scanf("%d", &menu);
	scanf("%d", &money); 

	if (menu == 1)
	{
		printf("Americano\n");
		change = money - 500; 
		obak = change / 500;
		bak = (change % 500) / 100; 
		printf("%d %d", obak, bak); 
	}

	if (menu == 2)
	{
		printf("Cafe Latte\n");
		change = money - 400;
		obak = change / 500;
		bak = (change % 500) / 100;
		printf("%d %d", obak, bak);
	}

	if (menu == 3)
	{
		printf("Lemon Tea\n"); 
		change = money - 300;
		obak = change / 500;
		bak = (change % 500) / 100;
		printf("%d %d", obak, bak);
	}
	
	return 0;
}