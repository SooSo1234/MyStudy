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
		printf("등록하실 비밀번호를 입력하세요.\n");
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
				printf("숫자랑 영어만 입력\n");
				break;
			}
		}
		if (i < 8)
		{
			printf("8글자 이상 입력하시오.\n");
		}
		else if (swit1 == 0)
			printf("숫자도 포함하여 입력하시오.\n");
		else if (swit2 == 0)
			printf("영어도 포함하여 입력하시오.\n");


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
			printf("숫자랑 영어, '!', '_'만 입력\n");
			return 0;
		}
	}



	return 0;
}