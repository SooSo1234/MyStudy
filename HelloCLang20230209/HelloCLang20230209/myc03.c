#include<stdio.h>
int main()
{
	//조건문


	//삼항 연산자
	//항 : 코드
	int num;
	printf("숫자입력\n");
	scanf_s("%d", &num);
	num > 0 ? printf("양수\n") : printf("양수아님\n");
	printf("%d\n", num > 0);
	printf("%d\n", num < 0);
	printf("%d\n", num == 0);
	printf("%d\n", num = 0);
	printf("%d\n", num == 0);
	printf("%d\n", num != 0); //다르다
	num = 2001;
	num != 2002 ? printf("월드컵 모르네\n") : printf("4강신화\n");
	num = 0;
	char c = num == 0 ? '0' : '!';//c에 값을 대입하는데, num에 따라서 다르다.
	printf("%c", c);
	//(코드) ? (코드가 참일때 실행할 코드) : (코드가 거짓일때 실행할 코드);



	//if문

	//switch문


	return 0;
}