#include<stdio.h>
int main()
{
	int num[5];
	int max, min;
	printf("�� 5�� �Է�\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	puts("");
	max = min = num[0];
	char a1[5], b1[5];
	int a,b;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
		if (max <= num[i])
		{
			max = num[i];
			a = i+1;
		}
		if (min >= num[i])
		{
			min = num[i];
			b = i+1;
		}
	}
	printf("MAX = %d,\t%d��° ��\nMIN = %d,\t%d��° ��\n", max, a, min, b);
	
	printf("�� 5�� �Է�\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", (num+i));
	}
	max = min = *num;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
		if (max <= *(num+i))
		{
			max = *(num+i);
			a = i + 1;
		}
		if (min >= *(num+i))
		{
			min = *(num + i);
			b = i + 1;
		}
	}
	printf("MAX = %d,\t%d��° ��\nMIN = %d,\t%d��° ��\n", max, a, min, b);





	return 0;
}