#include<stdio.h>
int main()
{
	int a, b;
	printf("3자리 숫자 2개를 입력하시오\n");
	scanf_s("%d %d", &a, &b);
	printf("\n첫번째 숫자와 두번째 숫자 1의자리 수의 곱의 값은 : %d\n", a*(b%10));
	printf("\n첫번째 숫자와 두번째 숫자 10의자리 수의 곱의 값은 : %d\n", a*(b%100)/10);
	printf("\n첫번째 숫자와 두번째 숫자 100의자리 수의 곱의 값은 : %d\n", a*(b/100));
	printf("\n첫번째 숫자와 두번째 숫자의 곱의 값은 : %d\n", a*b);






	return 0;
}