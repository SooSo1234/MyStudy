#include<stdio.h>
int main()
{
	int nYear, bYear, nMonth, bMonth;
	printf("���翬��, ���� �¾ ����, ���� ��, ���� �¾ �� �Է�\n");
	
	scanf_s("%d %d %d %d", &nYear, &bYear, &nMonth, &bMonth);
	
	int gYear = nYear - bYear;
	
	if (gYear < 0)
	{
		printf("�� ���� �߸��ƽ��ϴ�.\n");
	}
	else
	{
		int month = gYear * 12 + nMonth - bMonth;
		printf("����� ���� %d���� �Դϴ�.\n", month);
	}

	return 0;
}