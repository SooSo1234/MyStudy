#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int a1, i;
	a1 = n;
	i = 1;
	for (;; ++i)
	{
		a1 = (a1 % 10) * 10 + (a1 / 10 + a1 % 10) % 10;
		if (a1 == n)
			break;
	}
	printf("%d\n", i);
	return 0;
}