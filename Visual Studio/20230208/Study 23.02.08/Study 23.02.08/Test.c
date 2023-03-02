#include<stdio.h>
int main()
{
	int a,b,c;
	scanf_s("%d %d %d", &a, &b,&c);
	if (a == b & a==c)
	{
		printf("%d\n", 10000 + a * 1000);
	}
	else if (a == b | a == c | b == c)
	{
		a == b ? printf("%d\n", 1000 + a * 100) : (a == c ? printf("%d\n", 1000 + a * 100) : printf("%d\n", 1000 + b * 100));
	}
	else
	{
		a > b& a > c ? printf("%d\n", a * 100) : (b > a & b > c ? printf("%d\n", b * 100) : printf("%d\n", c * 100));
	}
	

	return 0;

}