#include<stdio.h>
int sum()
{
	int a = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			a += i;
	}
	return a;
}

int main()
{
	printf("%d", sum());
}