#include<stdio.h>
void Introduce()
{
	char name[100];
	printf("이름은?\n");
	gets(name);
	printf("안녕하세요\n");
	printf("내 이름은 %s입니다.\n",name);
}

void printPower(int num)
{
	printf("%d의 제곱 : %d\n", num, num * num);
}

int sign()
{
	int a, b;
	printf("수 2개 입력하세요.\n");
	scanf_s("%d %d", &a, &b);
	if (a - b > 0)
		return 1;
	else if (a - b == 0)
		return 0;
	else
		return -1;
}

void signc()
{
	int a = sign();
	if (a < 0)
		printf("'음수'입니다.\n");
	else if (a > 0)
		printf("'양수'입니다.\n");
	else
		printf("'0'입니다.\n");
}

void change(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("a : %d b : %d\n", a, b);
	printf("*a : %d *b : %d\n", *a, *b);
}


/////////////////////////////////////// 메인 시작 ////////////////////////////////////////////////// 
int main()
{
	if (0)
	{
		Introduce();
		printPower(8);


		printf("%d\n", sign());
		signc();


		int a;
		printf("제곱을 구할 수를 입력하세요.\n");
		scanf_s("%d", &a);
		printPower(a);
	}


	int x = 3, y = 8;
	change(&x, &y);
	printf("%d %d\n",x, y);
	


	return 0;
}