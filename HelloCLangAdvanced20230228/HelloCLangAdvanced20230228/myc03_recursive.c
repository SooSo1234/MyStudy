#include<stdio.h>

int f(int n)
{
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return f(n - 1) + f(n - 2);
}
int f_for(int n)
{
	int f0 = 0;
	int f1 = 1;
	int f2;
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", f0);
		f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
	}
	return f0;

}


int main()
{
	printf("%d\n", f_for(8));
	return 0;
}