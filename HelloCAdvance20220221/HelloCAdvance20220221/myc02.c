#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("첫번째 숫자 입력\n");
	char num1[4];
	scanf_s("%s", num1, 4);
	printf("두번째 숫자 입력\n");
	char num2[4];
	scanf_s("%s", num2, 4);

	printf("첫번째 수 : %s, 두번째 수 : %s\n", num1, num2);
	printf("%d %d %d %d\n",
		atoi(num1) * (num2[2] - '0'),
		atoi(num1) * (num2[1] - '0'),
		atoi(num1) * (num2[0] - '0'),
		atoi(num1) * atoi(num2)	     );

	int mynum1 = (100 * (num1[0] - '0')) + (10 * (num1[1] - '0')) + (num1[2] - '0');
	int mynum2 = (100 * (num2[0] - '0')) + (10 * (num2[1] - '0')) + (num2[2] - '0');
	printf("%d %d %d %d\n", mynum1 * (mynum2 % 10), mynum1 * ((mynum2 / 10) % 10), mynum1 * (mynum2 / 100), mynum1 * mynum2);

	rewind(stdin);
	char ex[100];
	gets(ex);
	printf("%s", ex);
	rewind(stdin);
	scanf_s("%s", &ex, sizeof(ex));
	printf("%s", ex);


	return 0;
}