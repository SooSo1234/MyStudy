#include<stdio.h>
int main()
{
	//#region ġ�� tabŰ 2�� ������
	//Xcode���� �ȵ�
#pragma region First question


	if (0)
	{
		printf("1. X, Y ��ǥ�� �Է��Ͻÿ�.\n");
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
		printf("���̸� �Է��ϼ���.\n");

		int age;
		scanf_s("%d", &age);
		if (age < 0 || age>200)
			printf("Ÿ�뽺\n");
		else if (age < 20)
			printf("�̼�����\n");
		else if (age <= 50)
			printf("��ȸ�� �� ������\n");
		else if (age < 70)
			printf("������\n");
		else
			printf("������ ������\n");

	}




#pragma endregion

#pragma region Third question
	
	int h, m;
	printf("3. ��, ���� �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &h, &m);
	h = h % 24;
	if (m >= 60)
	{
		printf("�߸��� ���Դϴ�. ���� �ٽ� �Է��Ͻÿ�.\n");

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
		printf("�˶� �ð� : %d�� %d��\n", h, m);
	}





#pragma endregion






	return 0;
}