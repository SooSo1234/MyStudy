#include<stdio.h>

int f(int n)
{
	if (n <= 1)
		return n;
	else
		return f(n - 1) + f(n - 2);
}
int main()
{
	printf("피보나치 수열 8번째 : %d\n", f(8));

	return 0;
}
