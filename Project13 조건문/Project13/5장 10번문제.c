#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kor, mat, eng;
	scanf("%d %d %d", &kor, &eng, &mat);
	float avg;
	avg = (kor + mat + eng) / 3.0f;
	
	
	if (avg >= 91.5)
	{
		printf("A"); 
		if (kor == 100 || mat == 100 || eng == 100)
		{
			printf("Good");
		}
		if (kor < 60 || mat < 60 || eng < 60)
		{
			printf("Bad"); 
		}
	}
	
	else if (avg >= 85.5)
	{
		printf("B");
		if (kor == 100 || mat == 100 || eng == 100)
		{
			printf("Good");
		}
		if (kor < 60 || mat < 60 || eng < 60)
		{
			printf("Bad");
		}
	}

	else if (avg >= 80.5)
	{
		printf("C");
		if (kor == 100 || mat == 100 || eng == 100)
		{
			printf("Good");
		}
		if (kor < 60 || mat < 60 || eng < 60)
		{
			printf("Bad");
		}
	}

	else
	{
		printf("F"); 
		if (kor == 100 || mat == 100 || eng == 100)
		{
			printf("Good");
		}
		if (kor < 60 || mat < 60 || eng < 60)
		{
			printf("Bad");
		}
	}

	return 0; 
}