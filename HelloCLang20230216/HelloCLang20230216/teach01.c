#include<stdio.h>
int main()
{
	int a, b, c;
	printf("숫자 3개를 입력하세요.\n");
	scanf_s("%d %d %d", &a, &b, &c);
	int s = 0;
	if (a <= b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % c != 0)
			{
				printf("%d + %d = %d\n", s, i, s + i);
				s += i;
			}
			else
				printf("     %d는 %d의 배수이므로 제외\n", i, c);
		}
		printf("%d부터 %d까지의 합(%d 배수 제외) : %d\n", a, b, c, s);
	}
	else
	{
		printf("CASE 1: \n");
		printf("a(%d)가 b(%d)보다 큽니다. 값을 바꾸겠습니다.\n");

		printf("CASE 2: \n");

		int x = a;
		a = b;
		b = x;
		
		for (int i = a; i <= b; i++)
		{
			if (i % c != 0)
			{
				printf("%d + %d = %d\n", s, i, s + i);
				s += i;
			}
			else
				printf("    %d는 %d의 배수이므로 제외\n", i, c);
		}
		printf("%d부터 %d까지의 합(%d 배수 제외) : %d\n", a,b, c, s);


	}



	return 0;
}