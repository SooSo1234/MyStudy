#include<stdio.h>
#define MAXSIZE 1024
int main()
{
	if (0)
	{
		int a = 100;
		int* pt_a = &a;
		(*pt_a)++;
		printf("%d\n", pt_a);
		printf("%d\n", a);
		printf("%d\n", *pt_a);
		pt_a++;
		printf("%d\n", pt_a);
		printf("%d\n", *pt_a);

		int n[5] = { 10,20,30,40,50 };
		int n2[10];
		for (int i = 0; i < 10; i++)
		{
			n2[i] = i * i * 10;
			printf("%d\n", n2[i]);
		}
		printf("숫자 5개를 입력해보세요.\n");
		for (int i = 0; i < 5; i++)
		{
			scanf_s("%d", &n[i]);
		}
		int size = sizeof(n) / sizeof(n[0]);
		printf("%d\n", size);
		for (int i = 0; i < size; i++)
			printf("%d\n", n[i]);

		char* name1 = "소병수";
		//gets(name1);
		printf("%s\n", name1);

		rewind(stdin);
		char name[100];
		printf("이름이 뭐에요?\n");
		gets(name);
		printf("이름 : %s\n", name);
		char mbti[5];
		printf("MBTI를 입력하세요.\n");
		gets(mbti);

		printf("MBTI : %s\n", mbti);
	}


	char lang[10];
	printf("영어단어를 입력하시오\n");
	gets(lang);
	printf("입력한 단어는 %s\n", lang);
	printf("입력한 단어의 대소문자 반전한 표기는 ");
	int i = 0;
	while(1)
	{	
		if (lang[i] == NULL||i==10)
			break;

		if (lang[i] >= 'a' && lang[i] <= 'z')
			lang[i] = (int)lang[i] - 32;

		else if (lang[i] >= 'A' && lang[i] <= 'Z')
			lang[i] = (int)lang[i] + 32;


		i++;
	}
	printf("%s\n",lang);

	char pass[100];
	while (1)
	{
		printf("비밀번호를 입력하시오.\n");
		int swit = 1;
		gets(pass);
		for (i = 0; pass[i] != NULL; i++)
		{
			if (pass[i] >= 48 && pass[i] <= 57)
				continue;
			else
			{
				printf("숫자만 입력하시오\n");
				swit = 0;
				break;
			}

		}
		if (swit == 1)
			break;
	}
	while (1)
	{
		printf("비밀번호를 입력하시오.\n");
		int swit1 = 0;
		int swit2 = 0;
		gets(pass);
		for (i = 0; pass[i] != NULL; i++)
		{
			if (pass[i] >= 48 && pass[i] <= 57)
				swit1 = 1;
			else if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z'))
				swit2 = 1;
		}
		if (i < 7)
		{
			printf("8글자 이상 입력하세요.\n");
			continue;
		}
		else if (swit1 + swit2 == 2)
			break;
		else
			printf("영어와 숫자만 입력하세요.\n");
	}

	while (1)
	{
		printf("비밀번호를 입력하시오.\n비밀번호 : ");
		int swit1 = 0;
		int swit2 = 0;
		int swit3 = 0;
		gets(pass);
		for (i = 0; pass[i] != NULL; i++)
		{
			if (pass[i] >= '0' && pass[i] <= '9')
				swit1 = 1;
			else if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z'))
				swit2 = 1;
			else if (pass[i] == '!' || pass[i] == '_')
				swit3 = 1;
		}
		if (i < 7)
		{
			printf("8글자 이상 입력하세요.\n");
			continue;
		}
		else if (swit1 + swit2 + swit3 == 3)
			break;
		else
			printf("영어 숫자 특수문자('!','_')를 사용하여 비밀번호를 입력하시오.\n");
	}
	printf("비밀번호 : ");
	for (int j = 0; j < i; j++)
		printf("*");
	puts("");



	int num1;
	char num2[4];
	printf("3자리 수 2개를 하나씩 엔터하여 입력하시오.\n");
	scanf_s("%d", &num1);
	rewind(stdin);
	gets(num2);
	int sum = 0;
	int d = 1;
	for (i = 2; i >=0; i--)
	{
		printf("%d x %c = %d\n", num1, num2[i], num1 * (num2[i] - '0'));
		sum += num1 * (num2[i] - '0') * (d);
		d *= 10;
	}
	printf("%d x %s = %d\n", num1, num2,sum);


	return 0;
}