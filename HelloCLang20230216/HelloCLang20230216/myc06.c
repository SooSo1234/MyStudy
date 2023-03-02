#include<stdio.h>
int main()
{
	int floor;
	printf("¸îÃþ?\n");
	scanf_s("%d", &floor);


	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - i - 1; j++)
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++)
			printf("*");
		puts("");


	}












	return 0;
}
	