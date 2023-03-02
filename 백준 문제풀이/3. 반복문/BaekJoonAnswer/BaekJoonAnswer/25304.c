#include<stdio.h>
int main()
{
	int s,n,a,b;
	scanf_s("%d", &s);
	scanf_s("%d", &n);
	for (int i=1; i<=n;++i)
	{
		scanf_s("%d %d", &a, &b);
		s = s - (a * b);

	}
	if (s == 0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}


