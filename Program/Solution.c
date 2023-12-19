#include <stdio.h>

void main()
{
	int A = 0;
	int B = 0;
	
	printf("A : ");
	scanf_s("%d", &A);
	printf("B : ");
	scanf_s("%d", &B);

	if (A > 0 && B < 10)
	{
		printf("A+B = %d\n", A + B);
	}
	else
	{
		printf("입력값 오류");
	}
}