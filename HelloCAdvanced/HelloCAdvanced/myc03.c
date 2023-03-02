#include<stdio.h>
int main()
{
		int age[5];
	if (0)
	{
		for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++)
		{
			printf("숫자를 입력하세요.\n");
			scanf_s("%d", &age[i]);
		}
		for (int i = 0; i < 5; i++)
		{
			printf("%d\n", age[i]);
		}
	}
	printf("숫자를 입력하세요. ex) 10 20 30 40 50 이렇게 입력하기.\n");

	for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++)
	{

		scanf_s("%d", &age[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", age[i]);
	}
	int max = age[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < age[i])
			max = age[i];
	}
	printf("가장 높은 나이는 %d입니다. \n", max);


	return 0;
}