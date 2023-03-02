#include<stdio.h>
int main()
{
	char num1[1025] = { 0 };
	char num2[1025] = { 0 };
	int n;
	printf("몇번째 항을 구할지 입력하시오.\n");
	scanf_s("%d", &n);
	num1[0] = '1';
	printf("1번째 항의 num1은 : %s\n", num1);
	for (int i = 0; i < n-1; i++)
	{
		if (i == 0)
			num1[i] = '1';
		else
		{
			int count = 0;
			for (int j = 0; num1[j] != NULL;)
			{
				int sum = 0;
				for (int k = j;; k++)
				{
					if (num1[j] == num1[k])
						sum++;
					else
						break;
				}
				num2[count] = num1[j];
				num2[count + 1] = sum + '0';
				count += 2;
				j += sum;
			}
			for (int j = 0; num2[j] != NULL; j++)
				num1[j] = num2[j];
		}
		printf("%d번째 항의 num1은 : %s\n", i+1, num1);
	}
	printf("%s\n", num1);


	return 0;
}