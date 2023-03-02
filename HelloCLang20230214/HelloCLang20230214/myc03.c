#include<stdio.h>
int main()
{
	int n, x, y;
	FIRST:
	printf("n 입력\n");
	scanf_s("%d", &n);

	if (n < 3)
	{
		printf("잘못된 값\n");
		goto FIRST;
	}
	int count = 0;
	printf("x, y 입력\n");
	scanf_s("%d %d", &x, &y);
	double resultx = x;				//n 값이 올라갈수록 resultx, resulty에서 저장해야 할 수가 커지므로 높은 n값을 입력할땐 resultx, resulty를 int가 아닌 double로 지정해야함
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