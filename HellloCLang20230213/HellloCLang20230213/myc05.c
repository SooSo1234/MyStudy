#include<stdio.h>
int main()
{
	//1. �ݺ��Ǵ� ��ȯ ���� 5 4 6 2 3 1 ���ǹ����� ���(if�� switch�� ��� ����ؼ�)
	
	//2. ���� �¾ ���� �Է��ϰ�, �� ���� ���� ���
	//12,1,2�� �ܿ� 3,4,5�� �� 6,7,8�� ���� 9 10 11�� ���� �� ���� ���� ����ó��

	// ......��Ÿ���


	if (1)
	{
		int a;
		printf("5 4 6 2 3 1 ��ȯ�ϴ� ������ ���� �� �ϳ��� �Է��Ͻÿ�.\n");
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
		printf("���� �¾ ���� �Է��Ͻÿ�.\n");
		int myMonth;
		scanf_s("%d", &myMonth);
#pragma region Second Question If Lang
		if (1)
		{
			if (myMonth < 0 || myMonth>12)
			{
				printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
				goto REST1;
			}
			else if (myMonth == 12 || myMonth <= 2)
			{
				printf("�ܿ�\n");
			}
			else if (myMonth >= 3 && myMonth <= 5)
				printf("��\n");
			else if (myMonth >= 6 && myMonth <= 8)
				printf("����\n");
			else
				printf("����\n");
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
				printf("�ܿ�\n");
				break;
			case 3:
			case 4:
			case 5:
				printf("��\n");
				break;
			case 6:
			case 7:
			case 8:
				printf("����\n");
				break;
			case 9:
			case 10:
			case 11:
				printf("����\n");
				break;
			default:
				printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
				goto REST1;
				break;
			}
		}



#pragma endregion
	}
#pragma region �������


	if (1)
	{
		printf("�ȳ��ϼ���.\n");
		printf("\"�ȳ��ϼ���\"\n");
		printf("%d\n", 1 + 9);
		printf("1 + 9�� ������� %d�Դϴ�.\n", 1 + 9);
		printf("�� �������� RH%c���Դϴ�.\n", '+');
		printf("���� �̸����� %s@%s�Դϴ�.\n", "baptist0", "naver.com");
		printf("���� �÷��� %.1f, %.1f�Դϴ�.\n", 0.8, 0.8);
	}

#pragma endregion

#pragma region ���� �Է� �� ����
	if (1)
	{
		int num1, num2;
		printf("�ΰ��� ���� �Է��Ͻÿ�.\n");
		scanf_s("%d %d", &num1, &num2);
		printf("1. �� ���� ���� : %d\n", num1 + num2);
		printf("2. �� ���� ���� : %d\n", num1 * num2);
		printf("3-1. �� ���� ���� : %d\n", num1 - num2);
		if ((num1 - num2) < 0)
			printf("3-2. �� ���� ���� ���밪�� : %d\n", (num1 - num2) * (-1));
		else
			printf("3-2. �� ���� ���� ���밪�� : %d\n", num1 - num2);
		printf("4. ù��° ���� �ι�° ���� ���� �������� : %d\n", num1 % num2);
		printf("5. ù��° ���� �ι�° ���� ���� ���� : %d\n", num1 / num2);
		printf("6. ù��° ���� �ι�° ���� ���� ���� : %f\n", (double)num1 / num2);
		char name;
		printf("�̸��� ù �̴ϼ� �Է��Ͻÿ�.\n");
		rewind(stdin);
		scanf_s("%c", &name, 1);
		printf("7-1. �Է��� �̴ϼ��� : %c\n", name);
		if (name >= 64 && name <= 90)
		{
			printf("7-2. �Է��� ���ڴ� �빮���Դϴ�.\n");
			printf("7-3. �Է��� ������ �ҹ��ڴ� %c�Դϴ�.\n", name + 32);
		}
		else
		{
			printf("7-2. �Է��� ���ڴ� �ҹ����Դϴ�.\n");
			printf("7-3. �Է��� ������ �빮�ڴ� %c�Դϴ�.\n", name - 32);
		}
	}





#pragma endregion

#pragma region ��Ÿ��� ����
	if (1)
	{
		printf("1. ���� �ﰢ���� �غ��� ������ ���� �Է��Ͻÿ�.\n");
		int num3, num4, num5;
		scanf_s("%d %d", &num3, &num4);
		printf("�� : %d^2 + %d^2 = %d\n", num3, num4, num3 * num3 + num4 * num4);
		printf("2. �����ﰢ���� ������ ������ 2 ���� ���� ������ �������� 3 ���ڸ� �Է��Ͻÿ�.\n");
		scanf_s("%d %d %d", &num3, &num4, &num5);

		if (num5 == num3 * num3 + num4 * num4)
			printf("O\n");
		else
			printf("X\n");
		printf("3. ������ O, ũ�� +, ������ -\n");
		if (num5 == num3 * num3 + num4 * num4)
			printf("O\n");
		else if (num5 > num3 * num3 + num4 * num4)
			printf("+\n");
		else
			printf("-\n");
	}






#pragma endregion

#pragma region �丣���� ������ ����

	int x, y, n,x2,y2;
	RES2:
	printf("n��?\n");
	scanf_s("%d", &n);

	int r = 1;
	if (n <= 2)
	{
		printf("�߸��� �Է��Դϴ�.\n");
		goto RES2;
	}
	else
	{
		printf("x�� y��?\n");
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
		printf("n = %d, x = %d, y = %d �� ��� Z^%d = %d\n", n, x, y,n, x2 + y2);
	}


#pragma endregion


	return 0;
}