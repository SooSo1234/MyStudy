#include<stdio.h>
int main()
{
	//1. 반복되는 순환 수열 5 4 6 2 3 1 조건문으로 출력(if와 switch문 모두 사용해서)
	
	//2. 내가 태어난 월을 입력하고, 그 달의 계절 출력
	//12,1,2는 겨울 3,4,5는 봄 6,7,8은 여름 9 10 11은 가을 그 외의 값은 예외처리

	// ......기타등등


	if (1)
	{
		int a;
		printf("5 4 6 2 3 1 순환하는 수열의 숫자 중 하나를 입력하시오.\n");
		scanf_s("%d", &a);
#pragma region First Question If Lang
		if (1)
		{
			if (a == 5)
				printf("5 4 6 2 3 1\n");
			else if (a == 4)
				printf("4 6 2 3 1 5\n");
			else if (a == 6)
				printf("6 2 3 1 5 4\n");
			else if (a == 2)
				printf("2 3 1 5 4 6\n");
			else if (a == 3)
				printf("3 1 5 4 6 2\n");
			else
				printf("1 5 4 6 2 3\n");
		}
#pragma endregion
#pragma region First Question Switch Lang
		if (1)
		{
			switch (a)
			{
			case 5:
				printf("5 4 6 2 3 1\n");
				break;
			case 4:
				printf("4 6 2 3 1 5\n");
				break;
			case 6:
				printf("6 2 3 1 5 4\n");
				break;
			case 2:
				printf("2 3 1 5 4 6\n");
				break;
			case 3:
				printf("3 1 5 4 6 2\n");
				break;
			default:
				printf("1 5 4 6 2 3 \n");
				break;
			}

		}




#pragma endregion

		REST1:
		printf("내가 태어난 달을 입력하시오.\n");
		int myMonth;
		scanf_s("%d", &myMonth);
#pragma region Second Question If Lang
		if (1)
		{
			if (myMonth < 0 || myMonth>12)
			{
				printf("잘못된 값을 입력하였습니다.\n");
				goto REST1;
			}
			else if (myMonth == 12 || myMonth <= 2)
			{
				printf("겨울\n");
			}
			else if (myMonth >= 3 && myMonth <= 5)
				printf("봄\n");
			else if (myMonth >= 6 && myMonth <= 8)
				printf("여름\n");
			else
				printf("가을\n");
		}








#pragma endregion
#pragma region Second Question Switch Lang
		if (1)
		{
			switch (myMonth)
			{
			case 12:
			case 1:
			case 2:
				printf("겨울\n");
				break;
			case 3:
			case 4:
			case 5:
				printf("봄\n");
				break;
			case 6:
			case 7:
			case 8:
				printf("여름\n");
				break;
			case 9:
			case 10:
			case 11:
				printf("가을\n");
				break;
			default:
				printf("잘못된 값을 입력하였습니다.\n");
				goto REST1;
				break;
			}
		}



#pragma endregion
	}
#pragma region 기초출력


	if (1)
	{
		printf("안녕하세요.\n");
		printf("\"안녕하세요\"\n");
		printf("%d\n", 1 + 9);
		printf("1 + 9의 결과물은 %d입니다.\n", 1 + 9);
		printf("제 혈액형은 RH%c형입니다.\n", '+');
		printf("저의 이메일은 %s@%s입니다.\n", "baptist0", "naver.com");
		printf("저의 시력은 %.1f, %.1f입니다.\n", 0.8, 0.8);
	}

#pragma endregion

#pragma region 기초 입력 및 변수
	if (1)
	{
		int num1, num2;
		printf("두개의 수를 입력하시오.\n");
		scanf_s("%d %d", &num1, &num2);
		printf("1. 두 수의 합은 : %d\n", num1 + num2);
		printf("2. 두 수의 곱은 : %d\n", num1 * num2);
		printf("3-1. 두 수의 차는 : %d\n", num1 - num2);
		if ((num1 - num2) < 0)
			printf("3-2. 두 수의 차의 절대값은 : %d\n", (num1 - num2) * (-1));
		else
			printf("3-2. 두 수의 차의 절대값은 : %d\n", num1 - num2);
		printf("4. 첫번째 수를 두번째 수로 나눈 나머지는 : %d\n", num1 % num2);
		printf("5. 첫번째 수를 두번째 수로 나눈 몫은 : %d\n", num1 / num2);
		printf("6. 첫번째 수를 두번째 수로 나눈 값은 : %f\n", (double)num1 / num2);
		char name;
		printf("이름의 첫 이니셜 입력하시오.\n");
		rewind(stdin);
		scanf_s("%c", &name, 1);
		printf("7-1. 입력한 이니셜은 : %c\n", name);
		if (name >= 64 && name <= 90)
		{
			printf("7-2. 입력한 문자는 대문자입니다.\n");
			printf("7-3. 입력한 문자의 소문자는 %c입니다.\n", name + 32);
		}
		else
		{
			printf("7-2. 입력한 문자는 소문자입니다.\n");
			printf("7-3. 입력한 문자의 대문자는 %c입니다.\n", name - 32);
		}
	}





#pragma endregion

#pragma region 피타고라스 문제
	if (1)
	{
		printf("1. 직각 삼각형의 밑변과 옆변의 값을 입력하시오.\n");
		int num3, num4, num5;
		scanf_s("%d %d", &num3, &num4);
		printf("답 : %d^2 + %d^2 = %d\n", num3, num4, num3 * num3 + num4 * num4);
		printf("2. 직각삼각형의 빗변을 제외한 2 변의 값과 빛변의 제곱값인 3 숫자를 입력하시오.\n");
		scanf_s("%d %d %d", &num3, &num4, &num5);

		if (num5 == num3 * num3 + num4 * num4)
			printf("O\n");
		else
			printf("X\n");
		printf("3. 맞으면 O, 크면 +, 작으면 -\n");
		if (num5 == num3 * num3 + num4 * num4)
			printf("O\n");
		else if (num5 > num3 * num3 + num4 * num4)
			printf("+\n");
		else
			printf("-\n");
	}






#pragma endregion

#pragma region 페르마의 마지막 정리

	int x, y, n,x2,y2;
	RES2:
	printf("n은?\n");
	scanf_s("%d", &n);

	int r = 1;
	if (n <= 2)
	{
		printf("잘못된 입력입니다.\n");
		goto RES2;
	}
	else
	{
		printf("x와 y는?\n");
		scanf_s("%d %d", &x, &y);
		x2 = x;
		y2 = y;

		RES3:
		if (r < n)
		{
			x2 = x2 * x;
			y2 = y2 * y;
			r = r + 1;
			goto RES3;
		}
		printf("n = %d, x = %d, y = %d 일 경우 Z^%d = %d\n", n, x, y,n, x2 + y2);
	}


#pragma endregion


	return 0;
}