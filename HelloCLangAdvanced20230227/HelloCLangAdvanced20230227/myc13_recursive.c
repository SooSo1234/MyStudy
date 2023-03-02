#include<stdio.h>

int sum(int s)
{
	if (s <= 0)
		return 0;
	return s + sum(s - 1);
}

int f(int n)
{
	if (n <= 1)
		return n;
	return(f(n - 1) + f(n - 2));
}


int main()
{
	int n;
	printf("몇번 반복할래?\n");
	scanf_s("%d", &n);
	int sum1 = 1;
	int sum2 = 1;
	int temp;
	puts(" 재귀함수\t  반복문");
	for (int i = 1; i <= n; i++)
	{
		printf("n: %d=>\t%2d\t", i,f(i));
		
		if (i > 2)
		{
			temp = sum1;
			sum1 += sum2;
			sum2 = temp;
		}
		printf("n: %d=>\t%2d\n", i, sum1);

	}

}