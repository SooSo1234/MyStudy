#include<stdio.h>
#include<stdlib.h>
int main()
{

	//int size = 10;
	//int num[size];

	int size;
	printf("배열 길이?\n");
	scanf_s("%d", &size);
	int* numbers = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
		numbers[i] = i + 10;
	for (int i = 0; i < size; i++)
		printf("%d\n", numbers[i]);

	int* mynumbers = (int*)calloc(size, sizeof(int));
	int* mynumbers2 = (int*)malloc(size* sizeof(int));

	for (int i = 0; i < size; i++)
	{
		printf("calloc[%d] = %d\n", i, mynumbers[i]);
		printf("malloc[%d] = %d\n", i, mynumbers2[i]);
	}


	free(numbers);

	return 0;
}