#include<stdio.h>
int main()
{
	printf("나이는?\n");
	int age;
	scanf_s("%d", &age);
	printf("\n내 나이는 %d살입니다.\n", age);

	printf("\n몇월생입니까?\n");
	int mymonth;
	scanf_s("%d", &mymonth);

	printf("\n몇일생입니까?\n");
	int myday;
	scanf_s("%d", &myday);

	//올해 연도도 입력받게 한다
	//올해 연도와 내 나이를 통해서 언제 태어났는지 출력하게 한다.

	printf("\n올해 연도는?\n");
	int year;
	scanf_s("%d", &year);

	printf("\n지금 몇월 몇일입니까? 입력형식 mm dd\n");
	int month;
	int day;
	scanf_s("%d %d", &month, &day);


	printf("\n올해는 %d년 입니다.\n", year);
	printf("\n태어난 연도는 %d년 입니다.\n", year - age + 1);
	printf("\n당신의 생일은 %d월 %d일 입니다.\n", mymonth, myday);
	printf("\n%d개월생\n", (age -1) * 12 + month - mymonth);



	return 0;

}