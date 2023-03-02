#include<stdio.h>
int main()
{
	//1.
	printf("1. a b c 값을 입력하시오.\n");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int sum = 0;
	for (int i = a; i <= b;i++)
	{
		if(i%c!=0)
		 sum += i;
	}
	printf("%d\n", sum);


	printf("2. 필요한 설탕의 kg은?\n");
	int kg,kg3,kg5;
	scanf_s("%d", &kg);
	printf("CASE 1 : \n");
	
	for (int i = 100;i>0; i--)
	{
		a = kg % (5 * i);
		b = kg - (5 * i);
		if (kg % 5 == 0)
		{
			kg5 = kg / 5;
			kg3 = 0;
			break;
		}
		else if (kg%(5*i)!=0 && b % 3 == 0)
		{
			kg5 = i;
			kg3 = b/3;
			if (kg5 < 0 || kg3 < 0)
				continue;
			break;
		}
		else if(kg % 3 ==0)
		{
			kg5 = 0;
			kg3 = kg/3;
		}
		else
		{
			kg5 = 0;
			kg3=-1;
		}
		
	}
	printf("5kg : %d\n3kg : %d\n총 : %d\n",kg5,kg3, kg5 + kg3);

	printf("CASE 2 : \n");

	for (int i = 0; i <= 4; i++)
	{
		kg3 = i;
		a = (kg - 3 * i);//3 1 4 2 
		if (a % 5 == 0)
		{
			kg5 = a / 5;
			break;
		}
		else if (a<0)
		{
			kg5=0;
			kg3 = -1;
			break;
		}
	}
	printf("5kg : %d\n3kg : %d\n총 : %d\n",kg5,kg3, kg5 + kg3);








	return 0;
}