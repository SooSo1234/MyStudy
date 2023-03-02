#include<stdio.h>
int main()
{
//올해 연도 입력받기
	int year;										//int는 정수만 저장하므로 소수점은 전부 버림
	printf("올해는 몇년도인가요?\n\n");
	scanf_s("%d", &year);							//입력, year 변수에 값 입력하게 함
	printf("\n올해는 %d년도 입니다.\n", year);
	int age;
	printf("\n내 나이는?\n\n");
	scanf_s("%d", &age);
	printf("\n저는 %d년생 입니다\n", year - age + 1);
	
//한번에 여러개의 숫자를 입력할 수 있다. 
	printf("\n태어난 연도랑 나이를 입력하세요.\n");
	int birth;
	scanf_s("%d %d", &birth, &age);
	printf("\n지금은 %d년도입니다.\n", birth + age - 1);


	return 0;
}