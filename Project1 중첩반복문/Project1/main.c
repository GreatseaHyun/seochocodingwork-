#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int kor,mat,eng;
	int credits;
	float res;
	float kscore, escore, mscore;
	float grade;

	printf("���� ������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &kor);

	printf("\n���� ������ ������ �Է��Ͻÿ�: ");
	scanf("%f", &kscore);

	printf("\n���� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &eng);

	printf("\n���� ������ ������ �Է��Ͻÿ�: ");
	scanf("%f", &escore);

	printf("\n���� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &mat);

	printf("\n���� ������ ������ �Է��Ͻÿ�: ");
	scanf("%f", &mscore);

	credits = kor + mat + eng; 
	res = kor * kscore + mat * mscore + eng * escore;
	grade = res / credits;

	int results;

	results= (grade > 4.0) && (credits >= 10);
	printf("\n%d", results); 



	return 0;
}