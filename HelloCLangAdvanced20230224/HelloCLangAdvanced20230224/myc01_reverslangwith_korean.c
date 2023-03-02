#include<stdio.h>
int main()
{
	char sentense1[1024] = { NULL };
	char sentense2[1024] = { NULL };
	printf("문자열1 입력하세요.\n");
	gets(sentense1);
	int count = 0;
	for (count = 0; sentense1[count] != NULL; count++);
	int i = 0;
	int len = count-1;

	for (int i = 0; sentense1[i] != NULL; i++, len--)
	{
		if (sentense1[i] >= 0 && sentense1 <= 127)
			sentense2[len] = sentense1[i];
		else
		{
			if (len <= 0)
			{
				break;
			}
			sentense2[len - 1] = sentense1[i];
			sentense2[len] = sentense1[i+1];
			i++;
			len--;
		}
	}
	printf("\n%s %s\n", sentense1, sentense2);




	return 0;
}