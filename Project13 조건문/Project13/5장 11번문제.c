#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int q, w, e; 
	int strike=0;
	int ball=0;

	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &q, &w, &e);
	
	if (a == q)
	{
		strike++;
	}
	else if (a == w || a == e)
	{
		ball++;
	}

	if (b==w)
	{
		strike++;
	}

	else if (b == q || b == e)
	{
		ball++;
	}

	if (c == e)
	{
		strike++;
	}

	else if (c == q || c == w)
	{
		ball++;
	}

	printf("%dS%dB", strike, ball); 

	return 0; 
}