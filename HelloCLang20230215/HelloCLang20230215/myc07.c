#include<stdio.h>
//���� ���� ��
#define GAWI 0
#define BAWI 1
#define BO 2
//���
#define WIN 'W'
#define DRAW 'D'
#define LOOSE 'L'

int main()
{
	char result = DRAW;	//����� �����ϴ� ����
	for (; result != WIN;)
	{
		int first, second;
		printf("���� ���� ��! 1p�� 2p ���ÿ� ������\n");
		scanf_s("%d %d", &first, &second);
		first %= 3;
		second %= 3;

		if (  (first != GAWI && first != BAWI && first != BO) || (second != GAWI && second != BAWI && second != BO)  )
		{
			printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
			continue;
		}
		else
		{
			switch (first)
			{
			case GAWI:
				printf("1P : ����\n");
				if (second == BO)
				{
					printf("2P : ��\n");
					result = WIN;
					printf("1P �¸�\n");
				}
				else
				{
					if (second == BAWI)
					{
						printf("2P : ����\n");
						result = LOOSE;
						printf("1P �й�\n");
					}
					else
					{
						printf("2P : ����\n");
						result = DRAW;
						printf("���º�\n");
					}
				}
				break;
			case BAWI:
				printf("1P : ����\n");
				if (second == BO)
				{
					printf("2P : ��\n");
					result = LOOSE;
					printf("1P �й�\n");
				}
				else
				{
					if (second == BAWI)
					{
						printf("2P : ����\n");
						result = DRAW;
						printf("���º�\n");
					}
					else
					{
						printf("2P : ����\n");
						result = WIN;
						printf("1P �¸�\n");
					}
				}

				break;
			case BO:
				printf("1P : ��\n");
				if (second == BO)
				{
					printf("2P : ��\n");
					result = DRAW;
					printf("���º�\n");
				}
				else
				{
					if (second == BAWI)
					{
						printf("2P : ����\n");
						result = WIN;
						printf("1P �¸�\n");
					}
					else
					{
						printf("2P : ����\n");
						result = LOOSE;	
						printf("1P �й�\n");
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