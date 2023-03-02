#include<stdio.h>
int main()
{
	char sentense1[1024] = { NULL };
	char sentense2[1024] = { NULL };

	printf("입력하세요.\n");
	gets(sentense1);
	int count = 0;
	for (count = 0; sentense1[count] != NULL; count++);
	int i = 0;
	int len = count;
	for (i = 0; i <= count; i++, len--)
	{
		if (len == 0)
		{
			sentense2[i] = NULL;
			break;
		}
		sentense2[i] = sentense1[len - 1];
	}
	printf("%s %s\n", sentense1, sentense2);


	return 0;
}