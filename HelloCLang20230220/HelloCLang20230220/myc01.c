#include<stdio.h>
int main()
{
	printf("���̸� �Է��ϼ���\n");
	int a;
	scanf_s("%d", &a);
	if (a < 0)
		printf("Ÿ�뽺\n");
	else
	{
		switch (a/10)
		{
		case 0:
			printf("����\n");
			break;
		case 1:
			printf("���\n");
			break;
		case 2:
			printf("û��\n");
			break;
		case 3:
		case 4:
			printf("��ȸ�� main\n");
			break;
		case 5:
		case 6:
			printf("������\n");
			break;
		case 7:
		case 8:
		case 9:
			printf("������ ������\n");
			break;
		default:
			printf("�Ҹ���\n");
			break;
		}
	}


	return 0;
}