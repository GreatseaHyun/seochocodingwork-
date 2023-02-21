#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int kor, eng, mat;
	float avg;
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + mat + eng) / 3.0f;
	printf("%.2f\n", avg);

	int tmp;
	tmp = avg / 25;

	switch (tmp)

	{
	    case 4:
		case 3:

		printf("A");
		break;

		
		
		case 2:
		printf("B");
		break;
		
		case 1:
		
		
		case 0:
		printf("F");
		break;


	}

	return 0; 
}