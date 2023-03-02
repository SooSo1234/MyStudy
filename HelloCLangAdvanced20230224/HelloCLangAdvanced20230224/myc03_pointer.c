#include<stdio.h>
int main()
{
	int a = 100;
	int* pa = &a;
	int *pa1 = pa;
	int * pa2 = pa;

	double pi = 3.14;
	double* ppi = &pi;

	int** ptr_ptr_a = &pa;


	int numbers[5] = { 11,21,31,41,51 };
	int mul[3][2] = { {3,4},{1,11},{99,22} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("mul[%d][%d] : %d\n",i,j, mul[i][j]);
		}
	}

	int times[8][9];
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 8; j++)
			times[i][j] = (i+2) * (j+1);
	}
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 8; j++)
			printf("%d X %d = %d\ttimes[%d][%d]\n", i + 2, j + 1, times[i][j],i,j);
	}
	int sum = 0;
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 8; j++)
			sum += times[i][j];
	}
	printf("%d\n",sum);
	int(*nptr)[9] = &times;
	printf("%d %d %d\n", times, &times,&times[0][0]);
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 8; j++)
			printf("%d X %d = %d\tnptr[%d][%d]\n", i + 2, j + 1, nptr[i][j], i, j);
	}
	printf("%d\n", **times);
	printf("%d\n", **(times+1));
	printf("%d\n", *(*times+1));
	printf("%d\n", *(*times+10));

	printf("%d\n", **nptr);
	printf("%d\n", **(nptr + 1));
	printf("%d\n", *(*nptr + 1));
	printf("%d\n", *(*nptr + 10));
	return 0;
}