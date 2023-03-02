#include<stdio.h>
int main()
{

	printf("숫자 2개를 입력해보세요.\n");
	int b;
	scanf_s("%d %d", &a, &b);
	printf("a=%d, b=%d\n", a, b);

	rewind(stdin);
	
	printf("혈액형 RH +인지 -인지 적고 나이도 적기\n");
	char rh;
	int age;
	scanf_s("%c %d", &rh, 1, &age);
	printf("혈액형 Rh + - 여부 : %c\n나이 : %d", rh, age);


	return 0;
}