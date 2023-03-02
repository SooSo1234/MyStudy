#include<stdio.h>
int main()
{
	
	char sentense[100];
	printf("문장 입력해주세요.\n");
	fgets(sentense, sizeof(sentense), stdin);
	printf("%s\n", sentense);

	for (int i = 0; sentense[i] != NULL; i++)
	{
		char temp = sentense[i];
		if (sentense[i] >= 'A' && sentense[i] <= 'Z')
		{
			printf("%c", (temp + 'a' - 'A'));
		}
		else if (sentense[i] >= 'a' && sentense[i] <= 'z')
		{
			printf("%c", (temp + 'A' - 'a'));
		}
		else
			printf("%c", temp);
	}
	puts("");

	printf("문장 다시 입력해~\n");
	fgets(sentense, sizeof(sentense), stdin);
	printf("%s\n", sentense);

	for (int i = 0; sentense[i]!=NULL; i++)
	{
		if (sentense[i] >= '0' && sentense[i] <= '9')
			continue;
		else if (sentense[i] == '\n')
			break;
		else
		{
			printf("숫자만 입력하라고!\n");
			break;
		}
	}


	return 0;
}