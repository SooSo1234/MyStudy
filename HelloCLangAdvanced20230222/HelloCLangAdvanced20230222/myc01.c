#include<stdio.h>
int main()
{
	char name[100];
	int age;
	char bType[100];

	printf("�̸��� ������?\n");
	fgets(name, sizeof(name), stdin);
	for (int i = 0;; i++)
	{
		if (name[i] == '\n')
		{
			name[i] = NULL;
			break;
		}
	}
	printf("���̰� ����ΰ���?\n");
	scanf("%d", &age);
	printf("�������� ������?\n");
	while (getchar() != '\n');
	fgets(bType,sizeof(bType),stdin);
	printf("�̸� : %s, ���� : %d, ������ : %s\n", name, age, bType);
	return 0;
}