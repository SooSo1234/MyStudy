#include<stdio.h>
int main()
{
	const double PI = 3.14;								//const : 이름은 있으나 값 변경은 불가능한 상수 지정, 통상적으로 대문자 사용
	int r;
	printf("1. 원의 반지름을 입력하세요.\n");
	scanf_s("%d", &r);
	printf("원의 넓이 : %f\n", r * r * PI);
	printf("원의 둘레 : %f\n", 2 * r * PI);

	int mybyte; 
	printf("2. 바이트값 입력하세요.\n");
	scanf_s("%d", &mybyte);
	printf("%dbyte = %dbit\n", mybyte, mybyte * 8);


	int mybit;
	printf("3. 비트값 입력하세요.\n");
	scanf_s("%d", &mybit);
	printf("%dbit = %dbyte\n", mybit, mybit / 8);








	return 0;
}