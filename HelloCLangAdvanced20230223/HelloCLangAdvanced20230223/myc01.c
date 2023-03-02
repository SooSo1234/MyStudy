#include<stdio.h>
#define MAXSIZE 1024
int main()
{
	char input[MAXSIZE] = { NULL, };
	printf("문장을 입력하세요.\n");
	gets(input);
	int checkAphabet[26] = { 0 };
	for (int i = 0; input[i] != NULL; i++)
	{
		if (input[i] >= "A" && input[i] <= 'Z')
			input[i] += ('a' - 'A');
		if (input[i] < 'a' || input[i]>'z')
			return 0;
		checkAphabet[input[i] = 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (checkAphabet[i] != 0)
			printf("%s에서 %c는 %d글자 나옵니다.\n", input, 'a' + i, checkAphabet[i]);

	}


	return 0;
}