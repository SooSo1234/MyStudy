#include<stdio.h>
int main()
{
	printf("1���ϱ�1��? %d", 1 + 1);
	printf("\n%x\n", 255);

	

	//���� : shortm long long ���� ������ int�� ���� ��ǥ��
	int num1 = 2023;

	//�Ǽ� : float�� ������ double�� ���� ��ǥ��
	double mykg = 69.7;

	//���� : char
	char mygrade = 'A';

	printf("\n���ش� %d�⵵�Դϴ�.\n", num1);
	printf("\n�� �����Դ� %f�Դϴ�.\n", mykg);
	printf("\n%c %d\n", mygrade, mygrade);
	//���� A => 0100 0001(2)����� ���/0100=>���� 0001=>���� �� 1��°?
	int mygrade2 = 66;
	printf("\n%c\n", mygrade2);
	printf("\n%c\n", 64);

	return 0;


}
