#include<stdio.h>
#include<string.h>
int main()
{
	char a[10], b[10], c[10];
	char* n[10] = { "black","brown","red","orange","yellow", "green", "blue", "violet", "grey", "white" };
	int a1, b1, c1,i;
	long long d = 1;
	scanf_s("%s", a, 10);
	scanf_s("%s", b, 10);
	scanf_s("%s", c, 10);
	for (i = 0; i < 10; i++)
	{
		if (strcmp(a, n[i])==0)
			a1 = i;
		else if (strcmp(b,n[i])==0)
			b1 = i;
		else if (strcmp(c,n[i])==0)
			c1 = i;
	}
		printf("a1 = %d\n", a1);
		printf("b1 = %d\n", b1);
		printf("c1 = %d\n", c1);
		a1 *= 10;
		b1 += a1;

		for (i = 0; i < c1; i++)
			d *= 10;
		printf("%lld", b1 * d);



	return 0;
}