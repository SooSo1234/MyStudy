#include<stdio.h>
int main()
{
	int sec;
	printf("4. 몇 초?\n");
	scanf_s("%d", &sec);
	printf("%d분 %d초\n", sec / 60, sec % 60);


	char myfeel;
	int cm, age;
	rewind(stdin);
	printf("기분이 어때요?(+ - 0 중 하나)\n");
	scanf_s("%c", &myfeel, 1);
	printf("키와 나이 말하세요.(동시에)\n");
	scanf_s("%d %d", &cm, &age);
	printf("기분 : %c, 나이 : %d, 키 : %d\n", myfeel, age, cm);


	printf("기분, 키, 나이 한번에 입력해보세요.\n");
	rewind(stdin);
	scanf_s("%c %d %d", &myfeel, 1, &cm, &age);
	printf("기분 : %c, 나이 : %d, 키 : %d\n", myfeel, age, cm);





	return 0;
}