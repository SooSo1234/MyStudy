#include<stdio.h>
int main()
{
	//���ǹ�


	//���� ������
	//�� : �ڵ�
	int num;
	printf("�����Է�\n");
	scanf_s("%d", &num);
	num > 0 ? printf("���\n") : printf("����ƴ�\n");
	printf("%d\n", num > 0);
	printf("%d\n", num < 0);
	printf("%d\n", num == 0);
	printf("%d\n", num = 0);
	printf("%d\n", num == 0);
	printf("%d\n", num != 0); //�ٸ���
	num = 2001;
	num != 2002 ? printf("������ �𸣳�\n") : printf("4����ȭ\n");
	num = 0;
	char c = num == 0 ? '0' : '!';//c�� ���� �����ϴµ�, num�� ���� �ٸ���.
	printf("%c", c);
	//(�ڵ�) ? (�ڵ尡 ���϶� ������ �ڵ�) : (�ڵ尡 �����϶� ������ �ڵ�);



	//if��

	//switch��


	return 0;
}