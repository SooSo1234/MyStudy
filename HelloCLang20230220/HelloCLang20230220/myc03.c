#include<stdio.h>
int main()
{
	int n,i;
	int x = 0;
	printf("���ڸ� �Է��Ͻÿ�\n");
	scanf_s("%d", &n);
	for (i=0;n>0;i++)
	{
		if (i == 0)
			x = 1;
		else
			x = 6 * i;
		n-= x;
	}
	printf("%d\n", i);



	return 0;
}