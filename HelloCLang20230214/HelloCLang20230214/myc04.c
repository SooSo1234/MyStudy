#include<stdio.h>
int main()
{
	//논리연산
	printf("%d\n", 7 & 8);
	printf("%d\n", 7 | 8);
	printf("%d\n", 9 ^ 8);

	//비트연산
	printf("%d\n", 8 >> 2);//2	뒤에 0 2개 삭제
	printf("%d\n", 8 << 2);//32	뒤에 0 2개 삽입

	//증감연산
	
	int a = 10;
	a++;
	printf("a=%d\n", a);
	//printf("%d\n", ++a );
	printf("%d\n", ++a + a++ );
	printf("%d\n", a);

	printf("%d\n", --a);
	printf("%d\n", a--);
	printf("%d\n", a);

	return 0;
}