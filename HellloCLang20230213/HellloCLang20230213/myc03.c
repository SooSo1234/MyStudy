#include<stdio.h>
int main()
{

#pragma region First question
	if (0)
	{
		printf("���� ����\n");
	START:

		printf("�ð��� ���� �Է��ϼ���.\n");
		int h, m;
		scanf_s("%d %d", &h, &m);
		if (h < 0 || h>23 || m < 0 || m>60)
		{
			printf("�ٽ� �Է��ϼ���.\n");
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

		printf("%d�� %d��\n", h, m);
	}
#pragma endregion
	
#pragma region Second Question
	if (0)
	{
		int x, y;
		REF1:
		printf("x y ���� �Է��Ͻÿ�.\n");
		scanf_s("%d %d", &x, &y);
		if (x == 0 || y == 0)
		{
			printf("0\n�ٽ� �Է��ϼ���\n");
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
		printf("���̸� �Է��Ͻÿ�.\n");
		scanf_s("%d", &age);
		if (age < 0 || age>200)
		{
			printf("Ÿ�뽺\n�߸� �Է��Ͽ����ϴ�.\n");
			goto REF2;
		}
		else if (age < 20)
		{
			printf("�̼�����\n");

		}
		else if (age <= 50)
		{
			printf("��ȸ�� �� ������\n");

		}
		else if (age < 70)
		{
			printf("������\n");

		}
		else
		{
			printf("������ ������\n");

		}
	}


#pragma endregion

	return 0;
}