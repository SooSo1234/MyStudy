#include<stdio.h>
#include<string.h>
int main() {

	char c[1024] = { 0 };
	printf("문자열을 입력하시오.(한글제외)\n");
	gets(c);
	int a = strlen(c);
	printf("입력한 문자열의 개수는 %d\n", a);
	int i = 0;
	while (c[i] != NULL)
		c[i] = NULL;
	printf("문자열을 입력하시오.(한글포함)\n");
	gets(c);
	int count = 0;
	for (i = 0; c[i] != NULL; i++)
	{
		if (c[i] < 0)
		{
			count ++;
			i++;
		}
		else
			count++;
	}
	printf("입력한 문자열의 개수는 %d입니다.\n", count);

	while (c[i] != NULL)
		c[i] = NULL;

	printf("문자열을 입력하세요.(한글제외)\n");
	gets(c);
	char cop[1024] = { 0 };
	a = strlen(c)-1;
	for (i = 0; c[i] != NULL; i++)
	{
		cop[i] = c[a - i];
	}
	printf("입력한 문자열의 반대는 : %s\n", cop);

	while (c[i] != NULL)
	{
		c[i] = NULL;
		cop[i] = NULL;
	}
	printf("문자열을 입력하세요.(한글포함)\n");
	gets(c);
	a = strlen(c) - 1;
	char korean[1024] = { 0 };
	int k = 0;
	for (i = 0; c[i] != NULL; i++)
	{
		if (c[i] >= 0)
			continue;
		else
		{

			korean[k] = i;
			printf("%d %d\n", korean[k], k);
			i++;
			k++;
		}
	}
	for(i=0;korean[i]!=NULL;i++)
		printf("%d, ", korean[i]);
	puts("");
	for (i = 0; c[i] != NULL; i++)
	{
		if (c[a - i] < 0)
		{
			cop[i] = c[a - i - 1];
			cop[i + 1] = c[a - i];
			i++;
		}
		else
		{
			for (int j = 0; korean[j] != NULL; j++)
			{
				if (a - i - 1 == korean[j])
				{
					cop[i] = c[a - i - 1];
					cop[i + 1] = c[a - i];
					i++;
					break;
				}
				else
					cop[i] = c[a - i];
			}
		}
	}
	printf("입력한 문자열의 반대는 : %s\n", cop);

	while (c[i] != NULL)
	{
		c[i] = NULL;
		cop[i] = NULL;
	} 
	for (i = 0; c[i] != NULL; i++)
		cop[i] = c[i];
	printf("문자열을 입력하세요.\n");
	gets(c);

	printf("1번째 배열 : %s\t2번째 배열 : %s\n", c, cop);
	printf("1번째 배열 길이 : %d\t2번째 배열 길이 : %d\n", strlen(c), strlen(cop));

	return 0;
}