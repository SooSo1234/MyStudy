#include<stdio.h>
int Time(int a)
{
	printf("%d�� %d��\n", a / 60, a % 60);
}

int main()
{
	int s;
	printf("�ʸ� �Է��ϼ���\n");
	scanf_s("%d", &s);
	Time(s);
}
