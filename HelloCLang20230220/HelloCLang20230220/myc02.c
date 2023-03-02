#include<stdio.h>
int main()
{

	int i=2, j=1;
	while (i < 10)
	{
		while (j < 10)
		{
			printf("%d x %d = %d\n", i, j, i * j);
			j++;
		}
		j = 1;
		i++;
	}


	return 0;
}