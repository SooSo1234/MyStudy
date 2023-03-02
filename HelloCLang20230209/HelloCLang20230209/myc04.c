#include<stdio.h>
int main()
{
	int a;
	printf("1. 숫자를 입력하시오\n");
	scanf_s("%d", &a);

	a != 2022 ? printf("날강두\n") : printf("한반두\n");

	int age;
	printf("2. 나이를 입력하시오\n");
	scanf_s("%d", &age);
	age >= 20 ? printf("성인\n") : printf("아이\n");

	a < 0 ? printf("3. 0 미만의 수인 경우는 잘못된 것입니다.\n") : printf("3.\n");
	age >= 20 ? printf("성인\n") : (age < 0 ? printf("잘못된 나이\n") : printf("아이\n"));

	int b;

	printf("4. 임의의 수를 입력하시오\n");
	scanf_s("%d", &b);

	b != 0 ? (b > 0 ? printf("양수\n") : printf("음수\n")) : printf("0\n");


	int num;

	printf("5. 수를 입력하시오\n");
	scanf_s("%d", &num);
	
	char c = num != 0 ? (num > 0 ? '+' : '-') : '0';
	printf("%c\n",c);









	return 0;
}