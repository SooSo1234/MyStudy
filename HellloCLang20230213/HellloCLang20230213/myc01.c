#include<stdio.h>
int main()
{
	int nYear, bYear, nMonth, bMonth;
	printf("현재연도, 내가 태어난 연도, 현재 달, 내가 태어난 달 입력\n");
	
	scanf_s("%d %d %d %d", &nYear, &bYear, &nMonth, &bMonth);
	
	int gYear = nYear - bYear;
	
	if (gYear < 0)
	{
		printf("이 값은 잘못됐습니다.\n");
	}
	else
	{
		int month = gYear * 12 + nMonth - bMonth;
		printf("당신은 생후 %d개월 입니다.\n", month);
	}

	return 0;
}