#include<stdio.h>
int Time(int a)
{
	printf("%d분 %d초\n", a / 60, a % 60);
}

int main()
{
	int s;
	printf("초를 입력하세요\n");
	scanf_s("%d", &s);
	Time(s);
}
