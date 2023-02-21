#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int year, month, day; 
	int year2, month2, day2; 

	scanf("%d/%d/%d",&year, &month, &day);

	scanf("%d/%d/%d",&year2, &month2, &day2);

	if (year > year2)
	{
		printf("%02d/%02d/%02d", year2, month2, day2);

	}

	else if (year2 > year)
	{
		printf("%02d/%02d/%02d", year, month, day);


	}

	else
	{
		if (month > month2)
		{
			printf("%02d/%02d/%02d", year2, month2, day2);
		}

		else if (month2 > month)
		{
			printf("%02d/%02d/%02d", year, month, day);

		}

		else
		{
			if (day > day2)
			{
				printf("%02d/%02d/%02d", year2, month2, day2);
			}

			else if (day2 > day)
			{
				printf("%02d/%02d/%02d", year, month, day);
			}

			else
			{
				printf("%02d/%02d/%02d*", year, month, day);

			}
		}

	}

	return 0; 
}