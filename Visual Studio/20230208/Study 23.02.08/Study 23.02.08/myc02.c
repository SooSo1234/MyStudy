#include<stdio.h>
int main()
{
//���� �Է�
//���� ���
	printf("����� ������?\n");
	char grade;
	scanf_s("%c", &grade, 1);								//1byte�� �ʿ��ϴ� �ǹ̷� 1�� �߰�
	printf("\n����� ������ %c�Դϴ�.\n", grade);

	printf("\n����� ������?(����)\n");
	double score;
	scanf_s("%lf", &score);
	printf("\n����� ������ %.2lf�Դϴ�.\n", score);

//���ڿ� ���(�Է��� ���߿�)
	printf("\n���� MBTI�� %s�Դϴ�.\n", "ISTP");

//�⺻��Ģ����� ������ ����

//������ �⺻���� �켱����

	return 0;
}