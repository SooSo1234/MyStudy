#include<stdio.h>;
//��ũ�� ���(�ι�° ���)
#define GAWI 0
#define BAWI 1
#define BO 2
//����° ��� = ������ = Enumeration
enum RCP
{SCISSOR, ROCK, PAPPER};
//enum�� Ư¡: �߰��߰� ���� ���� �ٲܼ� �ִ�.
enum MyERCP
{
	ROCK2=1,SCISSOR2,PAPPER2,GUN=5,WOLF,AIR
};

int main()
{
	//0=����, 1=����, 2=��
	//����� �̿��ؼ� �������� ������Ų��.
	//��� 3��
	//ù��° const
	const int ���� = 0;
	const int ���� = 1;
	const int �� = 2;
	
	int first, second;
	printf("���� ���� ��!(1p)\n");
	scanf_s("%d", &first);
	if (first != ���� && first != ���� && first != 2)
		printf("�߸��� ��!\n");
	else
	{
		printf("���� ���� ��!(2p)\n");
		scanf_s("%d", &second);
		
		if (second == GAWI || second == BAWI || second == BO)
		{
			//enum REP a = ROCK;
			switch (first)
			{
			case SCISSOR:
				printf("1P ����\n");
				switch (second)
				{
				case SCISSOR:
					printf("2P ����\n");
					printf("���º�\n");
					break;
				case ROCK:
					printf("2P ����\n");
					printf("1P ��\n");
					break;
				case PAPPER:
					printf("2P ��\n");
					printf("1P ��\n");
					break;
				default:
					break;
				}
				break;
			case ROCK:
				printf("1P ����\n");
				switch (second)
				{
				case GAWI:
					printf("2P ����\n");
					printf("1P ��\n");
					break;
				case BAWI:
					printf("2P ����\n");
					printf("���º�\n");
					break;
				case BO:
					printf("2P ��\n");
					printf("1P ��\n");
					break;
				default:
					break;
				}
				break;
			case PAPPER:
				printf("1P ��\n");
				switch (second)
				{
				case 0:
					printf("2P ����\n");
					printf("1P ��\n");
					break;
				case 1:
					printf("2P ����\n");
					printf("1P ��\n");
					break;
				case 2:
					printf("2P ��\n");
					printf("���º�\n");
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
			printf("�߸��� ��\n");
		}
	}

	return 0;
}