#include<stdio.h>
int main()
{
	printf("나이를 입력하세요\n");
	int a;
	scanf_s("%d", &a);
	if (a < 0)
		printf("타노스\n");
	else
	{
		switch (a/10)
		{
		case 0:
			printf("응애\n");
			break;
		case 1:
			printf("잼민\n");
			break;
		case 2:
			printf("청춘\n");
			break;
		case 3:
		case 4:
			printf("사회의 main\n");
			break;
		case 5:
		case 6:
			printf("관리자\n");
			break;
		case 7:
		case 8:
		case 9:
			printf("지혜의 도서관\n");
			break;
		default:
			printf("불멸자\n");
			break;
		}
	}


	return 0;
}