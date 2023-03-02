#include<stdio.h>
void printfMyName(char* name);
int sum(int, int, int);

int main()
{
	printfMyName("소병수");
	int mysum = sum(1, 100, 3);
	printf("%d\n", mysum);
		
	return 0;
}

void printfMyName(char* name)
{
	printf("내 이름은 %s 입니다.\n", name);
}
int sum(int a, int b, int c)
{
	int sum = 0;
	for (int i = a; i <= b; i += c)
	{
		sum += i;
	}
	return sum;
}