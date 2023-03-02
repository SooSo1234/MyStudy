#include<stdio.h>
int main()
{
	int a;
	printf("x의 값을 입력하시오\n");
	scanf_s("%d", &a);
	printf("1. 2x + 7       = %d\n", (2 * a) + 7);

	printf("2. x^2 + 2x + 1 = %d\n   (x + 1)^2    = %d\n", a*a + 2 * a + 1, (a+1)*(a+1));



	return 0;
}