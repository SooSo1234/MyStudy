#include<stdio.h>
int main()
{
	int num = 0;
	do
	{
		printf("num값 입력해보세요.\n");
		scanf_s("%d", &num);
		printf("%d\n", num * num);
	} while (num>0);


	return 0;
}