#include<stdio.h>
int main()
{
	int sec;
	printf("4. �� ��?\n");
	scanf_s("%d", &sec);
	printf("%d�� %d��\n", sec / 60, sec % 60);


	char myfeel;
	int cm, age;
	rewind(stdin);
	printf("����� ���?(+ - 0 �� �ϳ�)\n");
	scanf_s("%c", &myfeel, 1);
	printf("Ű�� ���� ���ϼ���.(���ÿ�)\n");
	scanf_s("%d %d", &cm, &age);
	printf("��� : %c, ���� : %d, Ű : %d\n", myfeel, age, cm);


	printf("���, Ű, ���� �ѹ��� �Է��غ�����.\n");
	rewind(stdin);
	scanf_s("%c %d %d", &myfeel, 1, &cm, &age);
	printf("��� : %c, ���� : %d, Ű : %d\n", myfeel, age, cm);





	return 0;
}