#include<stdio.h>
int main()
{
	const double PI = 3.14;								//const : �̸��� ������ �� ������ �Ұ����� ��� ����, ��������� �빮�� ���
	int r;
	printf("1. ���� �������� �Է��ϼ���.\n");
	scanf_s("%d", &r);
	printf("���� ���� : %f\n", r * r * PI);
	printf("���� �ѷ� : %f\n", 2 * r * PI);

	int mybyte; 
	printf("2. ����Ʈ�� �Է��ϼ���.\n");
	scanf_s("%d", &mybyte);
	printf("%dbyte = %dbit\n", mybyte, mybyte * 8);


	int mybit;
	printf("3. ��Ʈ�� �Է��ϼ���.\n");
	scanf_s("%d", &mybit);
	printf("%dbit = %dbyte\n", mybit, mybit / 8);








	return 0;
}