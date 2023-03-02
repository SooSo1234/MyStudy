#include<stdio.h>
int main()
{
	int a, b, n;
	scanf_s("%d", &n);

	for (int i = 1;i<=n; ++i)
	{
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);

	}
	return 0;
}