#include<stdio.h>
int main()
{
	int n,a;
	a = 0;
	scanf_s("%d", &n);
	for (int i = 1;i<=n; ++i)
	{
		a += i;
	}
	printf("%d\n", a);
	return 0;
}