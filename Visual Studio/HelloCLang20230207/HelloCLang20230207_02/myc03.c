#include<stdio.h>
int main()
{
	printf("���̴�?\n");
	int age;
	scanf_s("%d", &age);
	printf("\n�� ���̴� %d���Դϴ�.\n", age);

	printf("\n������Դϱ�?\n");
	int mymonth;
	scanf_s("%d", &mymonth);

	printf("\n���ϻ��Դϱ�?\n");
	int myday;
	scanf_s("%d", &myday);

	//���� ������ �Է¹ް� �Ѵ�
	//���� ������ �� ���̸� ���ؼ� ���� �¾���� ����ϰ� �Ѵ�.

	printf("\n���� ������?\n");
	int year;
	scanf_s("%d", &year);

	printf("\n���� ��� �����Դϱ�? �Է����� mm dd\n");
	int month;
	int day;
	scanf_s("%d %d", &month, &day);


	printf("\n���ش� %d�� �Դϴ�.\n", year);
	printf("\n�¾ ������ %d�� �Դϴ�.\n", year - age + 1);
	printf("\n����� ������ %d�� %d�� �Դϴ�.\n", mymonth, myday);
	printf("\n%d������\n", (age -1) * 12 + month - mymonth);



	return 0;

}