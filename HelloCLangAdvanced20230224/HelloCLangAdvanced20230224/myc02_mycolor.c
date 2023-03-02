#include<stdio.h>
int main()
{
	char color[1024] = "color ";
	char c[100];
	int swit = 1;
	int count = 0;
	while (1)
	{
		count++;
		if (count >5)
		{
			printf("\n그냥 하지마.\n");
			return 0;
		}
		swit = 1;
		gets(c);
		if ((c[0] == c[1])&&!(c[0]=='z'||c[1]=='Z'))
		{
			printf("서로 다른 16진수 2개를 입력하세요.\n");
			swit = 0;
		}
		else if (strlen(c) > 2)
		{
			printf("서로 다른 16진수 2개를 입력하세요.\n");
			swit = 0;
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if ((c[i] >= '0' && c[i] <= '9') || (c[i] >= 'a' && c[i] <= 'f') || (c[i] >= 'A' && c[i] <= 'F')||(c[i]=='z')||(c[i]=='Z'))
				{
					continue;
				}
				else
				{
					printf("서로 다른 16진수 2개를 입력하세요.\n");
					swit = 0;
					break;
				}
			}
			if (swit == 1)
				break;
		}
	}
	color[6] = c[0];
	color[7] = c[1];
	system(color);
	printf("Hello World\n");
	return 0;
}