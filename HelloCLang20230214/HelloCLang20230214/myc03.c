#include<stdio.h>
int main()
{
	int n, x, y;
	FIRST:
	printf("n �Է�\n");
	scanf_s("%d", &n);

	if (n < 3)
	{
		printf("�߸��� ��\n");
		goto FIRST;
	}
	int count = 0;
	printf("x, y �Է�\n");
	scanf_s("%d %d", &x, &y);
	double resultx = x;				//n ���� �ö󰥼��� resultx, resulty���� �����ؾ� �� ���� Ŀ���Ƿ� ���� n���� �Է��Ҷ� resultx, resulty�� int�� �ƴ� double�� �����ؾ���
	double resulty = y;

MULT:

	count += 1;
	if (count < n)
	{
		resultx *= x;
		resulty *= y;
		goto MULT;
	}
	else
		printf("z^%d = %.0f\n", n, resultx + resulty);

	return 0;
}