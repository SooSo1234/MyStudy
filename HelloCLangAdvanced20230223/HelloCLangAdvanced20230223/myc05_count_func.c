#include<stdio.h>
#include<string.h>
#include<mbstring.h>
int main()
{
	char sentense[1024] = { 0 };
	printf("문장 입력하세요.\n");
	gets(sentense);
	printf("%d %d\n", strlen(sentense), _mbslen(sentense));
	//strlen 바이트 수 출력
	//_mbslen 글자수를 출력

	return 0;
}