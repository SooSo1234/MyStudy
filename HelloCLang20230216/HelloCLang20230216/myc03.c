#include<stdio.h>
int main()
{
	while (1)
	{
		int num;
		printf("숫자를 입력하세요.\n");
		scanf_s("%d", &num);
		if (num < 0)
			break;
		printf("%d\n",num*num);

	}
	int sum = 0;
	int i = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	
	return 0;

}