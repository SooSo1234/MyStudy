#include<stdio.h>
int main()
{
//���� ���� �Է¹ޱ�
	int year;										//int�� ������ �����ϹǷ� �Ҽ����� ���� ����
	printf("���ش� ��⵵�ΰ���?\n\n");
	scanf_s("%d", &year);							//�Է�, year ������ �� �Է��ϰ� ��
	printf("\n���ش� %d�⵵ �Դϴ�.\n", year);
	int age;
	printf("\n�� ���̴�?\n\n");
	scanf_s("%d", &age);
	printf("\n���� %d��� �Դϴ�\n", year - age + 1);
	
//�ѹ��� �������� ���ڸ� �Է��� �� �ִ�. 
	printf("\n�¾ ������ ���̸� �Է��ϼ���.\n");
	int birth;
	scanf_s("%d %d", &birth, &age);
	printf("\n������ %d�⵵�Դϴ�.\n", birth + age - 1);


	return 0;
}