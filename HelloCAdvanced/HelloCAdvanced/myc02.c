#include<stdio.h>
int main()
{
	if (0)
	{
		int n[5];
		printf("%d\n", sizeof(n));

		int* p = n;
		printf("%d\n", sizeof(p));

		int n2[3] = { 10,1,-1 };
		n2[2] = 100;
		scanf_s("%d", &n2[0]);

		for (int i = 0; i < sizeof(n2) / sizeof(int); i++)
		{
			printf("%d\n", n2[i]);
		}
	}



	int age[5];
	printf("��� 5���� ���̸� �Է��ϼ���.\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &age[i]);
	}
	printf("�Է��� ���̴� : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", age[i]);
	}
	puts("");
	int a=0;
	for (int i = 0; i < 5; i++)
	{
		if (a < age[i])
			a = age[i]; 
	}
	printf("���� ū ���̴� : %d\n", a);




	return 0;
}