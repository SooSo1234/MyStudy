/*
1.원의 반지름 r 값을 입력 받고, 원의 넓이와 원의 둘레값 출력하기
원의 넓이 : r*r*3.14
원의 둘레 : 2*r*3.14

2.byte를 입력받고 그에 해당하는 bit값 출력하기
입력 : 1  입력 : 5
출력 : 8  출력 : 40

3. bit값을 입력받고 그에 해당하는 byte값 출력하기
단, 소수점은 모두 버릴 것
입력 : 8  출력 : 1
입력 : 40 출력 : 5

4. 숫자를 입력받고 아래와 같이 출력한다. (단 3600 미만까지 입력한다고 가정한다.)
123 => 2분 3초

5. 자신의 기분 정보(+ - 0 중 하나), mbti, 혈액형 (RH +와 -도 입력),
키, 나이 이런 정보들을 입력받고, 출력

*/


#include<stdio.h>
int main()
{
	//1.

	int r;
	printf("1. 원의 반지름을 입력하시오\n");
	scanf_s("%d", &r);
	printf("원의 넓이 : %lf\n원의 둘레 : %lf\n", (double)r * r * 3.14, (double)2*r*3.14);


	int byte;
	printf("2. 몇Byte인지를 입력하시오\n");
	scanf_s("%d", &byte);
	printf("%d\n", byte*8);


	int bit;
	printf("3. 몇Bit인지를 입력하시오\n");
	scanf_s("%d", &bit);
	printf("%d\n", bit / 8);


	int num;
	printf("4. 0 ~ 3600 사이의 숫자를 입력하시오\n");
	scanf_s("%d", &num);
	printf("%d분 %d초\n", num / 60, num % 60);



	char feel;
	double tall;
	int age;

	printf("기분정보, 키, 나이 순으로 입력하시오\n");
	rewind(stdin);
	scanf_s("%c", &feel, 1);
	scanf_s("%lf",&tall);
	scanf_s("%d", &age);
	printf(" 기분 : %c \n 키 : %lf \n 나이 : %d \n", feel, tall, age);




	return 0;
}