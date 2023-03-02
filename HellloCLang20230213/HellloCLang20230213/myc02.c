#include<stdio.h>
int main()
{
	//#region 치고 tab키 2번 누르기
	//Xcode에선 안됨
#pragma region First question


	if (0)
	{
		printf("1. X, Y 좌표를 입력하시오.\n");
		int x, y;
		scanf_s("%d %d", &x, &y);

		if (x > 0 && y > 0)
			printf("1\n");
		else if (x < 0 && y > 0)
			printf("2\n");
		else if (x < 0 && y < 0)
			printf("3\n");
		else if (x > 0 && y < 0)
			printf("4\n");
		else
			printf("0\n");


		if (x == 0 || y == 0)
			printf("0\n");
		else if (x > 0)
		{
			if (y > 0)
				printf("1\n");
			else
				printf("4\n");

		}
		else
		{
			if (y > 0)
				printf("2\n");
			else
				printf("3\n");
		}
	}


#pragma endregion

#pragma region Second question
	if (0)
	{
		printf("나이를 입력하세요.\n");

		int age;
		scanf_s("%d", &age);
		if (age < 0 || age>200)
			printf("타노스\n");
		else if (age < 20)
			printf("미성년자\n");
		else if (age <= 50)
			printf("사회의 주 구성원\n");
		else if (age < 70)
			printf("관리자\n");
		else
			printf("지혜의 도서관\n");

	}




#pragma endregion

#pragma region Third question
	
	int h, m;
	printf("3. 시, 분을 입력하시오.\n");
	scanf_s("%d %d", &h, &m);
	h = h % 24;
	if (m >= 60)
	{
		printf("잘못된 값입니다. 분을 다시 입력하시오.\n");

	}
	else
	{
		m = m - 45;
		if(m<0)
		{
			m += 60;
			h =h%24;
			if (h < 0)
			{
				h += 24;
			}
		}
		printf("알람 시간 : %d시 %d분\n", h, m);
	}





#pragma endregion






	return 0;
}