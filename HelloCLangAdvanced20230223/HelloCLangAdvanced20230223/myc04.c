#include<stdio.h>
int main()
{
	char pass[1024];
	int swit1 = 0, swit2 = 0;
	int i;
	do
	{
		swit1 = 0;
		swit2 = 0;
		printf("����Ͻ� ��й�ȣ�� �Է��ϼ���.\n");
		gets(pass);
		for (i = 0; pass[i] != NULL; i++)
		{

			if (pass[i] >= '0' && pass[i] <= '9')
			{
				swit1 = 1;
				continue;
			}
			else if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z'))
			{
				swit2 = 1;
				continue;
			}
			else
			{
				printf("���ڶ� ��� �Է�\n");
				break;
			}
		}
		if (i < 8)
		{
			printf("8���� �̻� �Է��Ͻÿ�.\n");
		}
		else if (swit1 == 0)
			printf("���ڵ� �����Ͽ� �Է��Ͻÿ�.\n");
		else if (swit2 == 0)
			printf("��� �����Ͽ� �Է��Ͻÿ�.\n");


	}while (swit1 == 0||swit2==0);
	for (i = 0; pass[i] != NULL; i++)
		pass[i] = NULL;
	gets(pass);
	for (i = 0; pass[i] != NULL; i++)
	{
		if (pass[i] >= '0' && pass[i] <= '9')
			continue;
		else if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z'))
			continue;
		else if (pass[i] == '!' || pass[i] == '_')
			continue;
		else
		{
			printf("���ڶ� ����, '!', '_'�� �Է�\n");
			return 0;
		}
	}



	return 0;
}