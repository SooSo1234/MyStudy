#include<stdio.h>
int main()
{
	if (0)
	{
		printf("�ȳ��ϼ���.\n");
		printf("\"�ȳ��ϼ���.\"\n");
		printf("%d\n", 1 + 9);
		printf("1+9=%d\n", 1 + 9);
		printf("�� �������� RH%s�� �Դϴ�.\n", "+ O");
		printf("���� �̸����� %s@%s�Դϴ�.\n", "baptist0", "naver.com");
		printf("���� �÷��� %f, %f�Դϴ�.\n", 0.8, 0.9);

		int num1, num2;
		printf("ù��° ���ڴ�?\n");
		scanf_s("%d", &num1);
		printf("�ι�° ���ڴ�?\n");
		scanf_s("%d", &num2);
		printf("�� ���� �� : %d\n", num1 + num2);

		num1 < num2 ? printf("�� ���� �� : %d\n", num2 - num1) : printf("�� ���� �� : %d\n", num1 - num2);

		printf("%d ������ %d�� �������� %d�Դϴ�.\n", num1, num2, num1 % num2);
		printf("%d ������ %d�� ���� %d�Դϴ�.\n", num1, num2, num1 / num2);
		printf("1 ������ 3�� ��� %f %f %f\n", 1.0 / 3, 1.0 / 3.0, 1 / 3.0);
		printf("%d/%d=%f\n", num1, num2, (double)num1 / num2);
		char first_init;
		rewind(stdin);
		printf("��� �̸��� ù���ڴ�?\n");
		scanf_s("%c", &first_init, sizeof(char));
		printf("��� �̸��� ù���ڴ� %c�Դϴ�.\n", first_init);

		if (first_init >= 'A' && first_init <= 'Z')
		{
			printf("%c�� �빮��!\n", first_init);
			printf("%c�� �ҹ��ڴ� : %c\n", first_init, first_init + ('a' - 'A'));
		}
		else if (first_init >= 'a' && first_init <= 'z')
		{
			printf("%c�� �ҹ���!\n", first_init);
			printf("%c�� �빮�ڴ� : %c\n", first_init, first_init - ('a' - 'A'));
		}
		else
		{
			printf("�߸��� ��!!!\n");
		}
	}




	return 0;

}