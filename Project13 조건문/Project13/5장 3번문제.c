#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, e; 
	scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
	int f; 
	if (a < 0)
		a = 0; 
	if (b < 0)
		b = 0; 
	if (c < 0)
		c = 0;
	if (d < 0)
		d = 0;
	if (e < 0)
		e = 0;
	f = a + b + c + d + e; 
	printf("%d", f); 



	return 0;
}