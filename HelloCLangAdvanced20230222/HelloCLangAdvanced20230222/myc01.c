#include<stdio.h>
int main()
{
	char name[100];
	int age;
	char bType[100];

	printf("이름이 뭐에요?\n");
	fgets(name, sizeof(name), stdin);
	for (int i = 0;; i++)
	{
		if (name[i] == '\n')
		{
			name[i] = NULL;
			break;
		}
	}
	printf("나이가 몇살인가요?\n");
	scanf("%d", &age);
	printf("혈액형이 뭐에요?\n");
	while (getchar() != '\n');
	fgets(bType,sizeof(bType),stdin);
	printf("이름 : %s, 나이 : %d, 혈액형 : %s\n", name, age, bType);
	return 0;
}