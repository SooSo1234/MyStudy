#include<stdio.h>
int main()
{
		int age[5];
	if (0)
	{
		for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++)
		{
			printf("���ڸ� �Է��ϼ���.\n");
			scanf_s("%d", &age[i]);
		}
		for (int i = 0; i < 5; i++)
		{
			printf("%d\n", age[i]);
		}
	}
	printf("���ڸ� �Է��ϼ���. ex) 10 20 30 40 50 �̷��� �Է��ϱ�.\n");

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
	printf("���� ���� ���̴� %d�Դϴ�. \n", max);


	return 0;
}