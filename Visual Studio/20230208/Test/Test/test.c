#include<stdio.h>
int main()
{
	printf("2, 8 진수를 구할 수를 입력하시오.\n");
	
		int num1;
		int bin1;
		int bin2 = 0;
		int j = 1;

		scanf_s("%d", &num1);

		int bin0 = num1;
		int eit0 = num1;
		int mor0 = num1;

	for(int i=1;;++i)
	{
		bin1 = bin0 % 2;
		bin2 = bin2 + bin1*j;
		bin0 = bin0 / 2;
		j = j * 10;
		if (bin0 == 0)
		{
			break;
		}

	}
	printf("2진수 : %d\n", bin2);
	
	j = 1;
	int bin00 = bin2;
	int bin10;
	int bin20=0;
	int x = 1;

	for (int i = 1;; ++i)
	{
		bin10 = (bin00 % (10));
		bin20 = bin20 + bin10*x;
		j = j * 10;
		x = x * 2;
		bin00 = bin00 / 10;
		if (bin00 == 0)
			break;
	}

	printf("10진수 : %d\n", bin20);


	j = 1;

	int eit1;
	int eit2 = 0;

	for (int i=1;; ++i)
	{
		eit1 = eit0 % 8;
		eit2 = eit2 + eit1 * j;
		eit0 = eit0 / 8;
		j = j * 10;
		if (eit0 == 0)
			break;
	}
	printf("8진수 : %d\n", eit2);




	return 0;
}