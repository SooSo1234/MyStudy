#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d", &a);
	c = a;
	int i = 1;
	for(;;++i)
	{
		b = c / 10 + c % 10;

		c = (c % 10) * 10 + (b % 10);

		if (c == a)
			break;

	}
		printf("%d\n", i);
	
	return 0;
}