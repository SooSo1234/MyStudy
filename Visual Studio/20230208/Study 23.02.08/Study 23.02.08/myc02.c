#include<stdio.h>
int main()
{
//문자 입력
//문자 출력
	printf("당신의 학점은?\n");
	char grade;
	scanf_s("%c", &grade, 1);								//1byte가 필요하단 의미로 1을 추가
	printf("\n당신의 학점은 %c입니다.\n", grade);

	printf("\n당신의 학점은?(숫자)\n");
	double score;
	scanf_s("%lf", &score);
	printf("\n당신의 학점은 %.2lf입니다.\n", score);

//문자열 출력(입력은 나중에)
	printf("\n저의 MBTI는 %s입니다.\n", "ISTP");

//기본사칙연산과 나머지 연산

//연산의 기본적인 우선순위

	return 0;
}