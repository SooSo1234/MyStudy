#include<stdio.h>
int main()
{
	int num = 0;
	do
	{
		printf("num�� �Է��غ�����.\n");
		scanf_s("%d", &num);
		printf("%d\n", num * num);
	} while (num>0);


	return 0;
}