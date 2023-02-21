#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	char ch;
	char tmp; 
	scanf("%c", &ch); 

	
	if (ch >= 'A' && ch <= 'Z')
	{
		tmp = ch + 32;
		printf("%c", tmp);
	}

	else if (ch >= 'a' && ch <= 'z')
	{
		tmp = ch - 32;
		printf("%c", tmp);
	}

	else
		printf("none"); 
	

	


	return 0;
}