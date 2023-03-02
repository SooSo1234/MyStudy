#include<stdio.h>
int a = 3;
int b = 5;
void change()
{
	int c = a;
	a = b;
	b = c;
}



int main()
{
	change();
	printf("%d %d\n", a,b);



	return 0;
}