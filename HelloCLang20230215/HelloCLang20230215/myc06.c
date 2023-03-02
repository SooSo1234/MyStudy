#include<stdio.h>;
//매크로 상수(두번째 방법)
#define GAWI 0
#define BAWI 1
#define BO 2
//세번째 방법 = 열거형 = Enumeration
enum RCP
{SCISSOR, ROCK, PAPPER};
//enum의 특징: 중간중간 수의 지정 바꿀수 있다.
enum MyERCP
{
	ROCK2=1,SCISSOR2,PAPPER2,GUN=5,WOLF,AIR
};

int main()
{
	//0=가위, 1=바위, 2=보
	//상수를 이용해서 가독성을 증가시킨다.
	//방법 3개
	//첫번째 const
	const int 가위 = 0;
	const int 바위 = 1;
	const int 보 = 2;
	
	int first, second;
	printf("가위 바위 보!(1p)\n");
	scanf_s("%d", &first);
	if (first != 가위 && first != 바위 && first != 2)
		printf("잘못된 값!\n");
	else
	{
		printf("가위 바위 보!(2p)\n");
		scanf_s("%d", &second);
		
		if (second == GAWI || second == BAWI || second == BO)
		{
			//enum REP a = ROCK;
			switch (first)
			{
			case SCISSOR:
				printf("1P 가위\n");
				switch (second)
				{
				case SCISSOR:
					printf("2P 가위\n");
					printf("무승부\n");
					break;
				case ROCK:
					printf("2P 바위\n");
					printf("1P 패\n");
					break;
				case PAPPER:
					printf("2P 보\n");
					printf("1P 승\n");
					break;
				default:
					break;
				}
				break;
			case ROCK:
				printf("1P 바위\n");
				switch (second)
				{
				case GAWI:
					printf("2P 가위\n");
					printf("1P 승\n");
					break;
				case BAWI:
					printf("2P 바위\n");
					printf("무승부\n");
					break;
				case BO:
					printf("2P 보\n");
					printf("1P 패\n");
					break;
				default:
					break;
				}
				break;
			case PAPPER:
				printf("1P 보\n");
				switch (second)
				{
				case 0:
					printf("2P 가위\n");
					printf("1P 패\n");
					break;
				case 1:
					printf("2P 바위\n");
					printf("1P 승\n");
					break;
				case 2:
					printf("2P 보\n");
					printf("무승부\n");
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}
		}
		else
		{
			printf("잘못된 값\n");
		}
	}

	return 0;
}