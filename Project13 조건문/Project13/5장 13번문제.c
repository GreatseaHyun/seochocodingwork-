#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int kor, eng, mat; 
	float avg; 
	scanf("%d %d %d", &kor, &eng, &mat); 

	avg = (kor + mat + eng) / 3.0f;
	printf("%.2f\n", avg); 

	
	if (avg >= 75)
	{
		printf("A");
	}
	else if (avg >= 50)
	{

		printf("B");
	}
	else
	{
		printf("F");
	}

	return 0; 
}