#include<stdio.h>
int main()
{
	printf("1더하기1은? %d", 1 + 1);
	printf("\n%x\n", 255);

	

	//정수 : shortm long long 등이 있으나 int가 가장 대표적
	int num1 = 2023;

	//실수 : float도 있으나 double이 가장 대표적
	double mykg = 69.7;

	//문자 : char
	char mygrade = 'A';

	printf("\n올해는 %d년도입니다.\n", num1);
	printf("\n내 몸무게는 %f입니다.\n", mykg);
	printf("\n%c %d\n", mygrade, mygrade);
	//문자 A => 0100 0001(2)기계어로 등록/0100=>문자 0001=>문자 중 1번째?
	int mygrade2 = 66;
	printf("\n%c\n", mygrade2);
	printf("\n%c\n", 64);

	return 0;


}
