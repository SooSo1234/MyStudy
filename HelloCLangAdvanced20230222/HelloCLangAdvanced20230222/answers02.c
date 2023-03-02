#include<stdio.h>
int main()
{
	char num[1025] = { 0 };
	char num2[1025] = { 0 };


	num[0] = '1';
	for (int i = 0; i < 19; i++)
	{
		int count = 0;
		for (int j = 0; num[j]>='0'&&num[j]<='9';)
		{
			int sum = 0;
			for (int z = j;num[z]>='0'&&num[z]<='9'; z++)
			{
				if (num[j] == num[z])
				{
					sum++;
				}
				else
				{
					break;
				}
			}
			num2[count] = num[j];
			num2[count + 1] = sum + '0';
			j += sum;
			count += 2;
		}
		for (int j = 0; num2[j]>='0'&&num2[j]<='9'; j++)
			num[j] = num2[j];
	}
	printf("%s\n", num);







	return 0;
}