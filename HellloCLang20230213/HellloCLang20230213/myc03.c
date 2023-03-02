#include<stdio.h>
int main()
{

#pragma region First question
	if (0)
	{
		printf("문제 시작\n");
	START:

		printf("시간과 분을 입력하세요.\n");
		int h, m;
		scanf_s("%d %d", &h, &m);
		if (h < 0 || h>23 || m < 0 || m>60)
		{
			printf("다시 입력하세요.\n");
			goto START;
		}
		else
		{
			m -= 45;
			if (m < 0)
			{
				m += 60;
				h -= 1;
				if (h < 0)
				{
					h += 24;
				}
			}
		}

		printf("%d시 %d분\n", h, m);
	}
#pragma endregion
	
#pragma region Second Question
	if (0)
	{
		int x, y;
		REF1:
		printf("x y 값을 입력하시오.\n");
		scanf_s("%d %d", &x, &y);
		if (x == 0 || y == 0)
		{
			printf("0\n다시 입력하세요\n");
			goto REF1;
		}
		else if (x > 0 && y > 0)
		{
			printf("1\n");
		}
		else if (x < 0 && y>0)
		{
			printf("2\n");
		}
		else if (x < 0 && y < 0)
		{
			printf("3\n");
		}
		else
		{
			printf("4\n");
		}
	}
#pragma endregion

#pragma region Third question
	if (1)
	{
		int age;
		REF2:
		printf("나이를 입력하시오.\n");
		scanf_s("%d", &age);
		if (age < 0 || age>200)
		{
			printf("타노스\n잘못 입력하였습니다.\n");
			goto REF2;
		}
		else if (age < 20)
		{
			printf("미성년자\n");

		}
		else if (age <= 50)
		{
			printf("사회의 주 구성원\n");

		}
		else if (age < 70)
		{
			printf("관리자\n");

		}
		else
		{
			printf("지혜의 도서관\n");

		}
	}


#pragma endregion

	return 0;
}