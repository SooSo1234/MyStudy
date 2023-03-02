#include<stdio.h>
int main()
{

	int a = 10;
	if (a > 0)
		printf("a는 양수입니다.\n");

	if (a >= 10)
	{
		printf("a는 두자리 수 이상입니다.\n");
		printf("a는 10보다 클 수도 있고 10일 수도 있다.\n");
	}

	if (a != 0)
	{
		if (a > 0)
		{
			printf("양");
		}
		else
		{
			printf("음");
		}
	}
	else
	{
		printf("0");
	}

	char c;
	if (a > 0)
		c = '+';
	else if (a < 0)
		c = '+';
	else
		c = '0';




	return 0;
}