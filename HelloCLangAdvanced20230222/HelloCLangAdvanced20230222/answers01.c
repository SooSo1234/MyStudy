#include<stdio.h>
#define SIZE 1024
int main()
{
	char alph[SIZE];
	for (int swit = 1; swit != 0;)
	{
		printf("��� �Է��ϼ���.\n");
		swit = 1;
		gets(alph);
		for (int i = 0; alph[i] != NULL; i++)
		{
			if (alph[i] >= 'A' && alph[i] <= 'Z')
			{
				alph[i] += 'a' - 'A';
				swit = 0;
				continue;
			}
			else if (alph[i] >= 'a' && alph[i] <= 'z')
			{
				swit = 0;
				continue;
			}
			else if (alph[i] == ' ')
			{
				swit = 0;
				continue;
			}
			else
			{
				printf("���ĺ��� �Է��ϼ���.\n");
				swit = 1;
				break;
			}
		}

	}
	printf("1�� ���� ��� :\n");
	for (int i = 'a'; i <= 'z'; i++)
	{
		int a = 0;
		for (int j = 0; alph[j] != NULL; j++)
		{
			if (i == (int)alph[j])
				a++;
		}
		if (a > 0)
			printf("'%c'�� %d���� �Դϴ�.\n", (char)i, a);
		else
			continue;
	}
	printf("2�� ���� ��� :\n");
	for (int i = 'a'; i <= 'z'; i++)
	{
		int a = 0;
		for (int j = 0; alph[j] != NULL; j++)
		{
			if (i == (int)alph[j])
			{
				a = j + 1;
				break;
			}
		}
		if (a > 0)
			printf("'%c'�� %d��° ó�� �����մϴ�.\n", (char)i, a);
	}
	printf("3�� ���� ��� :\n");
	return;
}
