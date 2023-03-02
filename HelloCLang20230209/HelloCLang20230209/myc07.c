#include<stdio.h>
int main()
{
	int a, b;
	int c;
	printf("1. x y 좌표를 입력하시오\n");
	scanf_s("%d %d", &a, &b);
	if (a > 0)
	{
		if (b > 0)
		{
			c = 1;
		}
		else
		{
			c = 4;
		}
	}
	else 
	{
		if (b > 0)
		{
			c = 2;
		}
		else
		{
			c = 3;
		}
	}
	printf("해당 좌표는 %d사분면에 있습니다.\n", c);

	int age;
	printf("2. 나이를 입력하시오\n");
	scanf_s("%d", &age);

	if (age < 0 || age > 200)
	{
		printf("당신은 타노스입니까?\n");
	}
	else if (age < 20)
	{
		printf("당신은 미성년자입니다.\n");
	}
	else if (age <= 50)
	{
		printf("당신은 사회의 주 구성원입니다.\n");
	}
	else if (age <= 70)
	{
		printf("당신은 관리자입니다.\n");
	}
	else
	{
		printf("당신은 지혜의 도서관입니다.\n");
	}


	int h, m;
	int h2, m2;
	printf("3. 시 분 을 입력하시오\n");
	scanf_s("%d %d", &h, &m);
	if (m >= 45)
	{
		h2 = h;
		m2 = m - 45;
	}
	else
	{
		if (h > 0)
		{
			h2 = h - 1;
			m2 = m - 45 + 60;
		}
		else
		{
			h2 = h - 1 + 24;
			m2 = m - 45 + 60;
		}
	}
	printf("%d시 %d분으로 알람을 맞추겠습니다.\n", h2, m2);

	return 0;

}