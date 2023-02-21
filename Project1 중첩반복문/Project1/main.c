#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int kor,mat,eng;
	int credits;
	float res;
	float kscore, escore, mscore;
	float grade;

	printf("국어 과목의 학점을 입력하시오: ");
	scanf("%d", &kor);

	printf("\n국어 과목의 평점을 입력하시오: ");
	scanf("%f", &kscore);

	printf("\n영어 과목의 학점을 입력하시오 : ");
	scanf("%d", &eng);

	printf("\n영어 과목의 평점을 입력하시오: ");
	scanf("%f", &escore);

	printf("\n수학 과목의 학점을 입력하시오 : ");
	scanf("%d", &mat);

	printf("\n수학 과목의 평점을 입력하시오: ");
	scanf("%f", &mscore);

	credits = kor + mat + eng; 
	res = kor * kscore + mat * mscore + eng * escore;
	grade = res / credits;

	int results;

	results= (grade > 4.0) && (credits >= 10);
	printf("\n%d", results); 



	return 0;
}