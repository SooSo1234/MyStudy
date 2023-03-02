#include<stdio.h>
int main()
{
	printf("%d\n", 1 + 1);
	printf("%d\n", 2 - 1);
	printf("%d\n", 2 * 3);
	printf("%d %f\n",  7/3, 7/3);
	printf("%f\n", 7.0/3);
	printf("%d\n", 7 % 3);

	printf("%d\n", 1 + 2 * 5);
	printf("%d\n", (1 + 2) * 5);

	int age = 33;
	int year = 1991;
	printf("%d\n", age + year - 1);

	//%d : decimal, 10진수 \ 정수
	//%f, %lf : 실수
	//%c : 문자
	//%s : 문자열(쌍따옴표 안에 들어가는 문장)


	return 0;
}