#include<stdio.h>
int main()
{
	if (0)
	{
		printf("안녕하세요.\n");
		printf("\"안녕하세요.\"\n");
		printf("%d\n", 1 + 9);
		printf("1+9=%d\n", 1 + 9);
		printf("제 혈액형은 RH%s형 입니다.\n", "+ O");
		printf("저의 이메일은 %s@%s입니다.\n", "baptist0", "naver.com");
		printf("저의 시력은 %f, %f입니다.\n", 0.8, 0.9);

		int num1, num2;
		printf("첫번째 숫자는?\n");
		scanf_s("%d", &num1);
		printf("두번째 숫자는?\n");
		scanf_s("%d", &num2);
		printf("두 수의 합 : %d\n", num1 + num2);

		num1 < num2 ? printf("두 수의 차 : %d\n", num2 - num1) : printf("두 수의 차 : %d\n", num1 - num2);

		printf("%d 나누기 %d의 나머지는 %d입니다.\n", num1, num2, num1 % num2);
		printf("%d 나누기 %d의 몫은 %d입니다.\n", num1, num2, num1 / num2);
		printf("1 나누기 3의 결과 %f %f %f\n", 1.0 / 3, 1.0 / 3.0, 1 / 3.0);
		printf("%d/%d=%f\n", num1, num2, (double)num1 / num2);
		char first_init;
		rewind(stdin);
		printf("당신 이름의 첫글자는?\n");
		scanf_s("%c", &first_init, sizeof(char));
		printf("당신 이름의 첫글자는 %c입니다.\n", first_init);

		if (first_init >= 'A' && first_init <= 'Z')
		{
			printf("%c는 대문자!\n", first_init);
			printf("%c의 소문자는 : %c\n", first_init, first_init + ('a' - 'A'));
		}
		else if (first_init >= 'a' && first_init <= 'z')
		{
			printf("%c는 소문자!\n", first_init);
			printf("%c의 대문자는 : %c\n", first_init, first_init - ('a' - 'A'));
		}
		else
		{
			printf("잘못된 값!!!\n");
		}
	}




	return 0;

}