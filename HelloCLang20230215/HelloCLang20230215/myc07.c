#include<stdio.h>
//가위 바위 보
#define GAWI 0
#define BAWI 1
#define BO 2
//결과
#define WIN 'W'
#define DRAW 'D'
#define LOOSE 'L'

int main()
{
	char result = DRAW;	//결과를 저장하는 변수
	for (; result != WIN;)
	{
		int first, second;
		printf("가위 바위 보! 1p와 2p 동시에 내세요\n");
		scanf_s("%d %d", &first, &second);
		first %= 3;
		second %= 3;

		if (  (first != GAWI && first != BAWI && first != BO) || (second != GAWI && second != BAWI && second != BO)  )
		{
			printf("잘못된 값을 입력하였습니다.\n");
			continue;
		}
		else
		{
			switch (first)
			{
			case GAWI:
				printf("1P : 가위\n");
				if (second == BO)
				{
					printf("2P : 보\n");
					result = WIN;
					printf("1P 승리\n");
				}
				else
				{
					if (second == BAWI)
					{
						printf("2P : 바위\n");
						result = LOOSE;
						printf("1P 패배\n");
					}
					else
					{
						printf("2P : 가위\n");
						result = DRAW;
						printf("무승부\n");
					}
				}
				break;
			case BAWI:
				printf("1P : 바위\n");
				if (second == BO)
				{
					printf("2P : 보\n");
					result = LOOSE;
					printf("1P 패배\n");
				}
				else
				{
					if (second == BAWI)
					{
						printf("2P : 바위\n");
						result = DRAW;
						printf("무승부\n");
					}
					else
					{
						printf("2P : 가위\n");
						result = WIN;
						printf("1P 승리\n");
					}
				}

				break;
			case BO:
				printf("1P : 보\n");
				if (second == BO)
				{
					printf("2P : 보\n");
					result = DRAW;
					printf("무승부\n");
				}
				else
				{
					if (second == BAWI)
					{
						printf("2P : 바위\n");
						result = WIN;
						printf("1P 승리\n");
					}
					else
					{
						printf("2P : 가위\n");
						result = LOOSE;	
						printf("1P 패배\n");
					}
				}

				break;
			default:
				break;
			}
		}

	}
	

	return 0;
}