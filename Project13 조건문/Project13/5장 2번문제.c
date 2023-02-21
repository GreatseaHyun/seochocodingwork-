#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{

	unsigned N, M; 
	scanf("%d\n %d", &N, &M); 

	if (N == M * M)
		printf("%d*%d=%d", M, M, N);

	else if (M == N * N)
		printf("%d*%d=%d", N, N, M);

	else
		printf("none"); 

	return 0;
}