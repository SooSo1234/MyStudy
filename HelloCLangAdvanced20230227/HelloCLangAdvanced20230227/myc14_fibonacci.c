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
	printf("�Ǻ���ġ ���� 8��° : %d\n", f(8));

	return 0;
}
