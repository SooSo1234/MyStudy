#include<stdio.h>

extern mya;
extern myb;

int main()
{
	printf("%d\n", mya);
	mya = 0;
	printf("%d\n", mya);
	increase();
	

	return 0;
}