#include<stdio.h>

int main()
{
	int a = 10;
	int *ptra = &a;

	printf("%d %d %d %d %d\n", a, &a, ptra, *ptra,&ptra);

	*ptra = 1000;

	printf("%d\n", a);
	int** pptt = &ptra;
	printf("%d %d %d %d\n", pptt, &ptra, *pptt, **pptt);

	int numbers[] = { 1,2,3,4,5 };
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 1000;
	numbers2[2] = 10000;
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", numbers[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", numbers2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *(numbers +i));

	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", numbers +i);
		printf("%d\n", &(numbers[i]));
	}
	printf("%d\n", &numbers + 1);
	return 0;
}