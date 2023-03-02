#include<stdio.h>
int main()
{
	printf("현재 연도, 내가 태어난 연도, 현재 월, 내가 태어난 월\n");
	int a, b, c, d;

	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if ( (a - b) * 12 + (c - d)<=0;)
	{
		printf("%d개월\n", (a - b) * 12 + (c - d));
	}
	else
		printf("잘못 입력하였습니다.")





	return 0;
}