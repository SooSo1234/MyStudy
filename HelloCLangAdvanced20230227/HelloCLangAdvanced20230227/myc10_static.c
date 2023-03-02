#include<stdio.h>

void mytest1()
{
	int a = 10;
	a++;
	printf("a = %d\n", a);
}
void mytest2()
{
	static int a = 10;
	a++;
	printf("static a = %d\n", a);
}

int main()
{
	mytest1();
	mytest1();
	mytest2();
	mytest2();

	
}