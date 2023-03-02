#include<stdio.h>
#define MAXSIZE 2048
int main()
{
	char start[MAXSIZE] = "1";
	for (int i = 1; i <= 20; i++)
	{
		printf("%d ¹øÂ° : %s\n", i,start);
		char end[MAXSIZE] = { NULL };
		char num = start[0];
		int count = 0;
		int k = 0;
		for (int j = 0; start[j] != NULL; j++)
		{
			if (num != start[j])
			{
				end[k] = num;
				k++;
				end[k] = count + '0';
				k++;
				num = start[j];
				count = 1;
			}
			else
			{
				count++;
			}

		}
		end[k] = num;
		k++;
		end[k] = count + '0';
		int c = 0;
		for (c = 0; end[c] != NULL; c++)
			start[c] = end[c];
		start[c] = NULL;

	}


	return 0;
}